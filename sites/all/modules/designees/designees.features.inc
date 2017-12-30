<?php
/**
 * @file
 * designees.features.inc
 */

/**
 * Implements hook_views_api().
 */
function designees_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function designees_eck_bundle_info() {
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

/**
 * Implements hook_eck_entity_type_info().
 */
function designees_eck_entity_type_info() {
  $items = array(
    'designee' => array(
      'name' => 'designee',
      'label' => 'Designee',
      'properties' => array(
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
        'changed' => array(
          'label' => 'Changed',
          'type' => 'integer',
          'behavior' => 'changed',
        ),
        'uuid' => array(
          'label' => 'UUID',
          'type' => 'text',
          'behavior' => 'uuid',
        ),
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
      ),
    ),
  );
  return $items;
}
