<?php
/**
 * @file
 * pro_101_user_infrastructure.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pro_101_user_infrastructure_user_default_permissions() {
  $permissions = array();

  // Exported permission: access overlay.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'overlay',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'assistant',
      2 => 'authenticated user',
      3 => 'developer',
      4 => 'professional',
      5 => 'support',
    ),
    'module' => 'user',
  );

  // Exported permission: administer permissions.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'user',
  );

  // Exported permission: administer realname.
  $permissions['administer realname'] = array(
    'name' => 'administer realname',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'realname',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'user',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'user',
  );

  // Exported permission: cancel users with no custom roles.
  $permissions['cancel users with no custom roles'] = array(
    'name' => 'cancel users with no custom roles',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: cancel users with role anonymoususer.
  $permissions['cancel users with role anonymoususer'] = array(
    'name' => 'cancel users with role anonymoususer',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: cancel users with role anonymoususer and other roles.
  $permissions['cancel users with role anonymoususer and other roles'] = array(
    'name' => 'cancel users with role anonymoususer and other roles',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: cancel users with role assistant.
  $permissions['cancel users with role assistant'] = array(
    'name' => 'cancel users with role assistant',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: cancel users with role assistant and other roles.
  $permissions['cancel users with role assistant and other roles'] = array(
    'name' => 'cancel users with role assistant and other roles',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: cancel users with role authenticateduser.
  $permissions['cancel users with role authenticateduser'] = array(
    'name' => 'cancel users with role authenticateduser',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: cancel users with role authenticateduser and other roles.
  $permissions['cancel users with role authenticateduser and other roles'] = array(
    'name' => 'cancel users with role authenticateduser and other roles',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: cancel users with role developer.
  $permissions['cancel users with role developer'] = array(
    'name' => 'cancel users with role developer',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: cancel users with role developer and other roles.
  $permissions['cancel users with role developer and other roles'] = array(
    'name' => 'cancel users with role developer and other roles',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: cancel users with role professional.
  $permissions['cancel users with role professional'] = array(
    'name' => 'cancel users with role professional',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: cancel users with role professional and other roles.
  $permissions['cancel users with role professional and other roles'] = array(
    'name' => 'cancel users with role professional and other roles',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: cancel users with role support.
  $permissions['cancel users with role support'] = array(
    'name' => 'cancel users with role support',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: cancel users with role support and other roles.
  $permissions['cancel users with role support and other roles'] = array(
    'name' => 'cancel users with role support and other roles',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'user',
  );

  // Exported permission: create users.
  $permissions['create users'] = array(
    'name' => 'create users',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: edit users with no custom roles.
  $permissions['edit users with no custom roles'] = array(
    'name' => 'edit users with no custom roles',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: edit users with role anonymoususer.
  $permissions['edit users with role anonymoususer'] = array(
    'name' => 'edit users with role anonymoususer',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: edit users with role anonymoususer and other roles.
  $permissions['edit users with role anonymoususer and other roles'] = array(
    'name' => 'edit users with role anonymoususer and other roles',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: edit users with role assistant.
  $permissions['edit users with role assistant'] = array(
    'name' => 'edit users with role assistant',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: edit users with role assistant and other roles.
  $permissions['edit users with role assistant and other roles'] = array(
    'name' => 'edit users with role assistant and other roles',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: edit users with role authenticateduser.
  $permissions['edit users with role authenticateduser'] = array(
    'name' => 'edit users with role authenticateduser',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: edit users with role authenticateduser and other roles.
  $permissions['edit users with role authenticateduser and other roles'] = array(
    'name' => 'edit users with role authenticateduser and other roles',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: edit users with role developer.
  $permissions['edit users with role developer'] = array(
    'name' => 'edit users with role developer',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: edit users with role developer and other roles.
  $permissions['edit users with role developer and other roles'] = array(
    'name' => 'edit users with role developer and other roles',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: edit users with role professional.
  $permissions['edit users with role professional'] = array(
    'name' => 'edit users with role professional',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: edit users with role professional and other roles.
  $permissions['edit users with role professional and other roles'] = array(
    'name' => 'edit users with role professional and other roles',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: edit users with role support.
  $permissions['edit users with role support'] = array(
    'name' => 'edit users with role support',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: edit users with role support and other roles.
  $permissions['edit users with role support and other roles'] = array(
    'name' => 'edit users with role support and other roles',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'administerusersbyrole',
  );

  // Exported permission: select account cancellation method.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'user',
  );

  return $permissions;
}
