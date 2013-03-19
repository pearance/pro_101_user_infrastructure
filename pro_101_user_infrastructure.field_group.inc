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
  $field_group->identifier = 'group_awards_organizations|user|user|form';
  $field_group->group_name = 'group_awards_organizations';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile_tabs';
  $field_group->data = array(
    'label' => 'Awards & Organizations',
    'weight' => '30',
    'children' => array(
      0 => 'field_awards_organizations',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Awards & Organizations',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_awards_organizations|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_biography|user|user|form';
  $field_group->group_name = 'group_biography';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile_tabs';
  $field_group->data = array(
    'label' => 'Biography',
    'weight' => '32',
    'children' => array(
      0 => 'field_pro_bio',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Biography',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_biography|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_education|user|user|form';
  $field_group->group_name = 'group_education';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile_tabs';
  $field_group->data = array(
    'label' => 'Education',
    'weight' => '29',
    'children' => array(
      0 => 'field_education',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Education',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_education|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general_info|user|user|form';
  $field_group->group_name = 'group_general_info';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile_tabs';
  $field_group->data = array(
    'label' => 'General Information',
    'weight' => '27',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
      2 => 'field_specialties',
      3 => 'field_title',
      4 => 'field_user_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_general_info|user|user|form'] = $field_group;

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
  $field_group->identifier = 'group_office_info|user|user|form';
  $field_group->group_name = 'group_office_info';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile_tabs';
  $field_group->data = array(
    'label' => 'Office Information',
    'weight' => '31',
    'children' => array(
      0 => 'field_office',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Office Information',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_office_info|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_tabs|user|user|form';
  $field_group->group_name = 'group_profile_tabs';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile';
  $field_group->data = array(
    'label' => 'Profile Tabs',
    'weight' => '27',
    'children' => array(
      0 => 'group_awards_organizations',
      1 => 'group_biography',
      2 => 'group_education',
      3 => 'group_general_info',
      4 => 'group_office_info',
      5 => 'group_social_networks',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Profile Tabs',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_profile_tabs|user|user|form'] = $field_group;

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
  $field_group->identifier = 'group_social_networks|user|user|form';
  $field_group->group_name = 'group_social_networks';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile_tabs';
  $field_group->data = array(
    'label' => 'Social Networks',
    'weight' => '28',
    'children' => array(
      0 => 'field_facebook',
      1 => 'field_google_plus',
      2 => 'field_linkedin',
      3 => 'field_twitter',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Social Networks',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_social_networks|user|user|form'] = $field_group;

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
