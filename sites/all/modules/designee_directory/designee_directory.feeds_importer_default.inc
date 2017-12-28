<?php
/**
 * @file
 * designee_directory.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function designee_directory_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'directory_import';
  $feeds_importer->config = array(
    'name' => 'Directory import',
    'description' => 'Imports entries to the designee directory',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'delete_uploaded_file' => FALSE,
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsEntityProcessorDesignee',
      'config' => array(
        'values' => array(
          'id' => '',
          'created' => NULL,
          'changed' => NULL,
          'uuid' => '',
          'title' => '',
        ),
        'authorize' => TRUE,
        'mappings' => array(
          0 => array(
            'source' => 'last_name',
            'target' => 'field_designee_last_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'first_name',
            'target' => 'field_designee_first_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'mi',
            'target' => 'field_designee_middle_initial',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'city',
            'target' => 'field_designee_address:locality',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'zip',
            'target' => 'field_designee_address:postal_code',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'phone',
            'target' => 'field_designee_phone:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'email',
            'target' => 'field_designee_email',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'firm',
            'target' => 'field_designee_firm',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'state',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'Blank source 1',
            'target' => 'field_designee_address:administrative_area',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'Blank source 2',
            'target' => 'field_designee_address:country',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'id',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'last_name',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'designee',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['directory_import'] = $feeds_importer;

  return $export;
}
