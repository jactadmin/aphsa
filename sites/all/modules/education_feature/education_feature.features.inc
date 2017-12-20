<?php
/**
 * @file
 * education_feature.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function education_feature_commerce_product_default_types() {
  $items = array(
    'course' => array(
      'type' => 'course',
      'name' => 'Course',
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
function education_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function education_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function education_feature_node_info() {
  $items = array(
    'course_display' => array(
      'name' => t('Course Display'),
      'base' => 'node_content',
      'description' => t('Course Product Display'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
