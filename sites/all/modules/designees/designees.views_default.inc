<?php
/**
 * @file
 * designees.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function designees_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'designee_directory';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_designee';
  $view->human_name = 'Designee directory';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CHSA Designee Directory';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_designee_first_name' => 'field_designee_first_name',
    'field_designee_middle_initial' => 'field_designee_middle_initial',
    'field_designee_last_name' => 'field_designee_last_name',
    'field_designee_firm' => 'field_designee_firm',
    'field_designee_address' => 'field_designee_address',
    'field_designee_phone' => 'field_designee_phone',
    'field_designee_email' => 'field_designee_email',
    'field_designee_address_locality' => 'field_designee_address_locality',
    'field_designee_address_administrative_area' => 'field_designee_address_administrative_area',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_designee_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_designee_middle_initial' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_designee_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_designee_firm' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_designee_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_designee_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_designee_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_designee_address_locality' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_designee_address_administrative_area' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 'striped',
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  /* Field: Designee: First Name */
  $handler->display->display_options['fields']['field_designee_first_name']['id'] = 'field_designee_first_name';
  $handler->display->display_options['fields']['field_designee_first_name']['table'] = 'field_data_field_designee_first_name';
  $handler->display->display_options['fields']['field_designee_first_name']['field'] = 'field_designee_first_name';
  $handler->display->display_options['fields']['field_designee_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_designee_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_designee_first_name']['element_label_colon'] = FALSE;
  /* Field: Designee: Middle Initial */
  $handler->display->display_options['fields']['field_designee_middle_initial']['id'] = 'field_designee_middle_initial';
  $handler->display->display_options['fields']['field_designee_middle_initial']['table'] = 'field_data_field_designee_middle_initial';
  $handler->display->display_options['fields']['field_designee_middle_initial']['field'] = 'field_designee_middle_initial';
  $handler->display->display_options['fields']['field_designee_middle_initial']['label'] = '';
  $handler->display->display_options['fields']['field_designee_middle_initial']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_designee_middle_initial']['element_label_colon'] = FALSE;
  /* Field: Designee: Last Name */
  $handler->display->display_options['fields']['field_designee_last_name']['id'] = 'field_designee_last_name';
  $handler->display->display_options['fields']['field_designee_last_name']['table'] = 'field_data_field_designee_last_name';
  $handler->display->display_options['fields']['field_designee_last_name']['field'] = 'field_designee_last_name';
  $handler->display->display_options['fields']['field_designee_last_name']['label'] = 'Name';
  $handler->display->display_options['fields']['field_designee_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_designee_last_name']['alter']['text'] = '[field_designee_last_name], [field_designee_first_name] [field_designee_middle_initial] ';
  $handler->display->display_options['fields']['field_designee_last_name']['element_label_colon'] = FALSE;
  /* Field: Designee: Firm */
  $handler->display->display_options['fields']['field_designee_firm']['id'] = 'field_designee_firm';
  $handler->display->display_options['fields']['field_designee_firm']['table'] = 'field_data_field_designee_firm';
  $handler->display->display_options['fields']['field_designee_firm']['field'] = 'field_designee_firm';
  /* Field: Designee: Address */
  $handler->display->display_options['fields']['field_designee_address']['id'] = 'field_designee_address';
  $handler->display->display_options['fields']['field_designee_address']['table'] = 'field_data_field_designee_address';
  $handler->display->display_options['fields']['field_designee_address']['field'] = 'field_designee_address';
  $handler->display->display_options['fields']['field_designee_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_designee_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Designee: Phone (Office) */
  $handler->display->display_options['fields']['field_designee_phone']['id'] = 'field_designee_phone';
  $handler->display->display_options['fields']['field_designee_phone']['table'] = 'field_data_field_designee_phone';
  $handler->display->display_options['fields']['field_designee_phone']['field'] = 'field_designee_phone';
  /* Field: Designee: Email */
  $handler->display->display_options['fields']['field_designee_email']['id'] = 'field_designee_email';
  $handler->display->display_options['fields']['field_designee_email']['table'] = 'field_data_field_designee_email';
  $handler->display->display_options['fields']['field_designee_email']['field'] = 'field_designee_email';
  /* Field: Designee: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_designee_address_locality']['id'] = 'field_designee_address_locality';
  $handler->display->display_options['fields']['field_designee_address_locality']['table'] = 'field_data_field_designee_address';
  $handler->display->display_options['fields']['field_designee_address_locality']['field'] = 'field_designee_address_locality';
  $handler->display->display_options['fields']['field_designee_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_designee_address_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_designee_address_locality']['element_label_colon'] = FALSE;
  /* Field: Designee: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['field_designee_address_administrative_area']['id'] = 'field_designee_address_administrative_area';
  $handler->display->display_options['fields']['field_designee_address_administrative_area']['table'] = 'field_data_field_designee_address';
  $handler->display->display_options['fields']['field_designee_address_administrative_area']['field'] = 'field_designee_address_administrative_area';
  $handler->display->display_options['fields']['field_designee_address_administrative_area']['label'] = '';
  $handler->display->display_options['fields']['field_designee_address_administrative_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_designee_address_administrative_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_designee_address_administrative_area']['display_name'] = 1;
  /* Sort criterion: Designee: Last Name (field_designee_last_name) */
  $handler->display->display_options['sorts']['field_designee_last_name_value']['id'] = 'field_designee_last_name_value';
  $handler->display->display_options['sorts']['field_designee_last_name_value']['table'] = 'field_data_field_designee_last_name';
  $handler->display->display_options['sorts']['field_designee_last_name_value']['field'] = 'field_designee_last_name_value';
  /* Filter criterion: Designee: Address - Locality (i.e. City) */
  $handler->display->display_options['filters']['field_designee_address_locality']['id'] = 'field_designee_address_locality';
  $handler->display->display_options['filters']['field_designee_address_locality']['table'] = 'field_data_field_designee_address';
  $handler->display->display_options['filters']['field_designee_address_locality']['field'] = 'field_designee_address_locality';
  $handler->display->display_options['filters']['field_designee_address_locality']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_designee_address_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_designee_address_locality']['expose']['operator_id'] = 'field_designee_address_locality_op';
  $handler->display->display_options['filters']['field_designee_address_locality']['expose']['label'] = 'City';
  $handler->display->display_options['filters']['field_designee_address_locality']['expose']['operator'] = 'field_designee_address_locality_op';
  $handler->display->display_options['filters']['field_designee_address_locality']['expose']['identifier'] = 'field_designee_address_locality';
  $handler->display->display_options['filters']['field_designee_address_locality']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_designee_address_locality']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_designee_address_locality']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_designee_address_locality']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_designee_address_locality']['expose']['autocomplete_field'] = 'field_designee_address_locality';
  $handler->display->display_options['filters']['field_designee_address_locality']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_designee_address_locality']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_designee_address_locality']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Designee: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['filters']['field_designee_address_administrative_area']['id'] = 'field_designee_address_administrative_area';
  $handler->display->display_options['filters']['field_designee_address_administrative_area']['table'] = 'field_data_field_designee_address';
  $handler->display->display_options['filters']['field_designee_address_administrative_area']['field'] = 'field_designee_address_administrative_area';
  $handler->display->display_options['filters']['field_designee_address_administrative_area']['value'] = array(
    'AL' => 'AL',
    'AK' => 'AK',
    'AZ' => 'AZ',
    'AR' => 'AR',
    'CA' => 'CA',
    'CO' => 'CO',
    'CT' => 'CT',
    'DE' => 'DE',
    'FL' => 'FL',
    'GA' => 'GA',
    'HI' => 'HI',
    'ID' => 'ID',
    'IL' => 'IL',
    'IN' => 'IN',
    'IA' => 'IA',
    'KS' => 'KS',
    'KY' => 'KY',
    'LA' => 'LA',
    'ME' => 'ME',
    'MD' => 'MD',
    'MA' => 'MA',
    'MI' => 'MI',
    'MN' => 'MN',
    'MS' => 'MS',
    'MO' => 'MO',
    'MT' => 'MT',
    'NE' => 'NE',
    'NV' => 'NV',
    'NH' => 'NH',
    'NJ' => 'NJ',
    'NM' => 'NM',
    'NY' => 'NY',
    'NC' => 'NC',
    'ND' => 'ND',
    'OH' => 'OH',
    'OK' => 'OK',
    'OR' => 'OR',
    'PA' => 'PA',
    'RI' => 'RI',
    'SC' => 'SC',
    'SD' => 'SD',
    'TN' => 'TN',
    'TX' => 'TX',
    'UT' => 'UT',
    'VT' => 'VT',
    'VA' => 'VA',
    'WA' => 'WA',
    'WV' => 'WV',
    'WI' => 'WI',
    'WY' => 'WY',
    'DC' => 'DC',
  );
  $handler->display->display_options['filters']['field_designee_address_administrative_area']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_designee_address_administrative_area']['expose']['operator_id'] = 'field_designee_address_administrative_area_op';
  $handler->display->display_options['filters']['field_designee_address_administrative_area']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['field_designee_address_administrative_area']['expose']['operator'] = 'field_designee_address_administrative_area_op';
  $handler->display->display_options['filters']['field_designee_address_administrative_area']['expose']['identifier'] = 'field_designee_address_administrative_area';
  $handler->display->display_options['filters']['field_designee_address_administrative_area']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_designee_address_administrative_area']['expose']['reduce'] = TRUE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'designee-directory';
  $export['designee_directory'] = $view;

  return $export;
}
