<?php
/**
 * @file
 * premium_access.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function premium_access_user_default_roles() {
  $roles = array();

  // Exported role: premium.
  $roles['premium'] = array(
    'name' => 'premium',
    'weight' => 6,
  );

  return $roles;
}
