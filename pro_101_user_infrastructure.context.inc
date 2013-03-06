<?php
/**
 * @file
 * pro_101_user_infrastructure.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pro_101_user_infrastructure_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'profiles';
  $context->description = '';
  $context->tag = 'Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'people/*' => 'people/*',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'user-profile',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Pages');
  $export['profiles'] = $context;

  return $export;
}
