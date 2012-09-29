<?php
/**
 * @file
 * pro_101_user_infrastructure.mollom.inc
 */

/**
 * Implements hook_default_mollom_form().
 */
function pro_101_user_infrastructure_default_mollom_form() {
  $export = array();

  $mollom_form = new stdClass();
  $mollom_form->disabled = FALSE; /* Edit this to true to make a default mollom_form disabled initially */
  $mollom_form->api_version = 1;
  $mollom_form->form_id = 'user_pass';
  $mollom_form->entity = '';
  $mollom_form->bundle = '';
  $mollom_form->mode = TRUE;
  $mollom_form->checks = array();
  $mollom_form->discard = TRUE;
  $mollom_form->moderation = FALSE;
  $mollom_form->enabled_fields = array();
  $mollom_form->strictness = 'normal';
  $mollom_form->module = 'user';
  $export['user_pass'] = $mollom_form;

  $mollom_form = new stdClass();
  $mollom_form->disabled = FALSE; /* Edit this to true to make a default mollom_form disabled initially */
  $mollom_form->api_version = 1;
  $mollom_form->form_id = 'user_register_form';
  $mollom_form->entity = 'user';
  $mollom_form->bundle = 'user';
  $mollom_form->mode = TRUE;
  $mollom_form->checks = array(
    0 => 'spam',
  );
  $mollom_form->discard = TRUE;
  $mollom_form->moderation = FALSE;
  $mollom_form->enabled_fields = array(
    0 => 'field_bio_summary][und][0][value',
    1 => 'field_first_name][und][0][value',
    2 => 'field_last_name][und][0][value',
    3 => 'field_pro_bio][und][0][value',
    4 => 'field_title][und][0][value',
  );
  $mollom_form->strictness = 'normal';
  $mollom_form->module = 'user';
  $export['user_register_form'] = $mollom_form;

  return $export;
}
