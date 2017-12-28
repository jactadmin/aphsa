<?php
/**
 * @file
 * designee_directory.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function designee_directory_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'directory_import-blank_source_1-copy';
  $feeds_tamper->importer = 'directory_import';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'copy';
  $feeds_tamper->settings = array(
    'to_from' => 'from',
    'source' => 'state',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Copy source value';
  $export['directory_import-blank_source_1-copy'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'directory_import-blank_source_2-default_value';
  $feeds_tamper->importer = 'directory_import';
  $feeds_tamper->source = 'Blank source 2';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'US',
    'only_if_empty' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set value or default value';
  $export['directory_import-blank_source_2-default_value'] = $feeds_tamper;

  return $export;
}
