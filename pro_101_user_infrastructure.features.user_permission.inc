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
      1 => 'support',
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
      1 => 'support',
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

  // Exported permission: create field_bio_summary.
  $permissions['create field_bio_summary'] = array(
    'name' => 'create field_bio_summary',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_first_name.
  $permissions['create field_first_name'] = array(
    'name' => 'create field_first_name',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_hide_profile.
  $permissions['create field_hide_profile'] = array(
    'name' => 'create field_hide_profile',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_last_name.
  $permissions['create field_last_name'] = array(
    'name' => 'create field_last_name',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_pro_bio.
  $permissions['create field_pro_bio'] = array(
    'name' => 'create field_pro_bio',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_title.
  $permissions['create field_title'] = array(
    'name' => 'create field_title',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'developer',
    ),
    'module' => 'field_permissions',
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

  // Exported permission: edit field_bio_summary.
  $permissions['edit field_bio_summary'] = array(
    'name' => 'edit field_bio_summary',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_first_name.
  $permissions['edit field_first_name'] = array(
    'name' => 'edit field_first_name',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_hide_profile.
  $permissions['edit field_hide_profile'] = array(
    'name' => 'edit field_hide_profile',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_last_name.
  $permissions['edit field_last_name'] = array(
    'name' => 'edit field_last_name',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_pro_bio.
  $permissions['edit field_pro_bio'] = array(
    'name' => 'edit field_pro_bio',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_title.
  $permissions['edit field_title'] = array(
    'name' => 'edit field_title',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_bio_summary.
  $permissions['edit own field_bio_summary'] = array(
    'name' => 'edit own field_bio_summary',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_first_name.
  $permissions['edit own field_first_name'] = array(
    'name' => 'edit own field_first_name',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_hide_profile.
  $permissions['edit own field_hide_profile'] = array(
    'name' => 'edit own field_hide_profile',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_last_name.
  $permissions['edit own field_last_name'] = array(
    'name' => 'edit own field_last_name',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_pro_bio.
  $permissions['edit own field_pro_bio'] = array(
    'name' => 'edit own field_pro_bio',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_title.
  $permissions['edit own field_title'] = array(
    'name' => 'edit own field_title',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
    ),
    'module' => 'field_permissions',
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
      1 => 'support',
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
      1 => 'support',
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

  // Exported permission: view field_bio_summary.
  $permissions['view field_bio_summary'] = array(
    'name' => 'view field_bio_summary',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'assistant',
      2 => 'authenticated user',
      3 => 'developer',
      4 => 'professional',
      5 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_first_name.
  $permissions['view field_first_name'] = array(
    'name' => 'view field_first_name',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_hide_profile.
  $permissions['view field_hide_profile'] = array(
    'name' => 'view field_hide_profile',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_last_name.
  $permissions['view field_last_name'] = array(
    'name' => 'view field_last_name',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_pro_bio.
  $permissions['view field_pro_bio'] = array(
    'name' => 'view field_pro_bio',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_title.
  $permissions['view field_title'] = array(
    'name' => 'view field_title',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'developer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_bio_summary.
  $permissions['view own field_bio_summary'] = array(
    'name' => 'view own field_bio_summary',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_first_name.
  $permissions['view own field_first_name'] = array(
    'name' => 'view own field_first_name',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_hide_profile.
  $permissions['view own field_hide_profile'] = array(
    'name' => 'view own field_hide_profile',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_last_name.
  $permissions['view own field_last_name'] = array(
    'name' => 'view own field_last_name',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_pro_bio.
  $permissions['view own field_pro_bio'] = array(
    'name' => 'view own field_pro_bio',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_title.
  $permissions['view own field_title'] = array(
    'name' => 'view own field_title',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view private profiles.
  $permissions['view private profiles'] = array(
    'name' => 'view private profiles',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'pro_101_user_infrastructure',
  );

  return $permissions;
}
