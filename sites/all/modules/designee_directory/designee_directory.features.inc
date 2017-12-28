<?php
/**
 * @file
 * designee_directory.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function designee_directory_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_views_api().
 */
function designee_directory_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function designee_directory_eck_bundle_info() {
  $items = array(
    'designee_designee' => array(
      'machine_name' => 'designee_designee',
      'entity_type' => 'designee',
      'name' => 'designee',
      'label' => 'Designee',
      'config' => array(
        'managed_properties' => array(
          'title' => 'title',
          'created' => 0,
          'changed' => 0,
          'uuid' => 0,
        ),
      ),
    ),
  );
  return $items;
}
