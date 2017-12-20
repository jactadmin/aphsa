<?php
/**
 * @file
 * premium_access.features.inc
 */

/**
 * Implements hook_commerce_customer_profile_type_info().
 */
function premium_access_commerce_customer_profile_type_info() {
  $items = array(
    'billing' => array(
      'description' => 'The profile used to collect billing information on the checkout and order forms.',
      'help' => '',
      'addressfield' => TRUE,
      'module' => 'commerce_customer',
      'label_callback' => 'commerce_customer_profile_default_label',
      'type' => 'billing',
      'name' => 'Billing information',
    ),
  );
  return $items;
}

/**
 * Implements hook_commerce_product_default_types().
 */
function premium_access_commerce_product_default_types() {
  $items = array(
    'subscription' => array(
      'type' => 'subscription',
      'name' => 'Subscription',
      'description' => '',
      'help' => '',
      'revision' => 0,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function premium_access_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function premium_access_node_info() {
  $items = array(
    'subscription_display' => array(
      'name' => t('Subscription Display'),
      'base' => 'node_content',
      'description' => t('Subscription Product Display '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
