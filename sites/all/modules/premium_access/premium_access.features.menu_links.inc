<?php
/**
 * @file
 * premium_access.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function premium_access_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-menu_premium:node/10909.
  $menu_links['user-menu_premium:node/10909'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/10909',
    'router_path' => 'node/%',
    'link_title' => 'Premium',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'user-menu_premium:node/10909',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Premium');

  return $menu_links;
}
