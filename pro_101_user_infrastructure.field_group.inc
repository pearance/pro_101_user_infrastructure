<?php
/**
 * @file
 * pro_101_user_infrastructure.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pro_101_user_infrastructure_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_account|user|user|form';
  $field_group->group_name = 'group_account';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Account',
    'weight' => '1',
    'children' => array(
      0 => 'field_hide_profile',
      1 => 'redirect',
      2 => 'account',
      3 => 'timezone',
      4 => 'group_hide',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Account',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_account|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hide|user|user|form';
  $field_group->group_name = 'group_hide';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_account';
  $field_group->data = array(
    'label' => 'hide',
    'weight' => '5',
    'children' => array(
      0 => 'overlay_control',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'hide',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'hide',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_hide|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile|user|user|form';
  $field_group->group_name = 'group_profile';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Profile',
    'weight' => '2',
    'children' => array(
      0 => 'metatags',
      1 => 'group_profile_tabs',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Profile',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_profile|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs|user|user|form';
  $field_group->group_name = 'group_tabs';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_account',
      1 => 'group_profile',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_tabs|user|user|form'] = $field_group;

  return $export;
}
