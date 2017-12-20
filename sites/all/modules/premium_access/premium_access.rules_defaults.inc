<?php
/**
 * @file
 * premium_access.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function premium_access_default_rules_configuration() {
  $items = array();
  $items['commerce_payment_commerce_stripe'] = entity_import('rules_config', '{ "commerce_payment_commerce_stripe" : {
      "LABEL" : "Stripe",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_commerce_stripe" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : { "value" : {
                "method_id" : "commerce_stripe",
                "settings" : {
                  "stripe_currency" : "USD",
                  "secret_key" : "sk_test_xZRpxHszEPU1Ymg2RTgrae6P",
                  "public_key" : "pk_test_vtv9ZOH7gC4192TRw3dMSrn1",
                  "display_title" : "Stripe",
                  "receipt_email" : 0,
                  "integration_type" : "stripejs",
                  "checkout_settings" : {
                    "name" : "Access Point HSA Advisor",
                    "description" : "",
                    "image" : {
                      "fid" : 0,
                      "upload_button" : "Upload",
                      "remove_button" : "Remove",
                      "upload" : ""
                    },
                    "panelLabel" : "Pay {{amount}}",
                    "zipCode" : 0,
                    "allowRememberMe" : 0,
                    "bitcoin" : 0,
                    "billingAddress" : 0,
                    "shippingAddress" : 0
                  },
                  "cardonfile" : 1
                }
              }
            }
          }
        }
      ]
    }
  }');
  $items['rules_30_day_renewal_notification'] = entity_import('rules_config', '{ "rules_30_day_renewal_notification" : {
      "LABEL" : "30 Day Renewal Notification",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "commerce_recurring" ],
      "ON" : { "commerce_recurring_cron" : [] },
      "DO" : [
        { "commerce_recurring_get_due_items" : {
            "USING" : { "number_items" : "0", "timestamp" : "+1 day" },
            "PROVIDE" : { "commerce_recurring_entities" : { "commerce_recurring_entities" : "Commerce recurring entities" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "commerce-recurring-entities" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "user", "id" : [ "list-item:uid:uid" ] },
                  "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
                }
              },
              { "mail" : {
                  "to" : [ "entity-fetched:mail" ],
                  "subject" : "Your Premium Access Point HSA access is about to expire.",
                  "message" : "Your annual Access Point HSA Premier access will expire in 30 days.\\r\\n\\r\\nClick here to RENEW NOW.\\r\\n\\r\\nAny questions, please email info@accesspointhsa.com.",
                  "from" : [ "site:mail" ],
                  "language" : [ "list-item:type" ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
