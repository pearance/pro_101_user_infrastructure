<?php

/**
 * @file
 * Provides admin form for hide_profile
 */


/**
 * Settings form.
 */
function hide_profile_form($form, &$form_state) {
  $form = array();

  $form['hide_profile_destination'] = array(
    '#type' => 'textfield',
    '#title' => t('Redirect destination'),
    '#default_value' => variable_get('hide_profile_destination', ''),
    '#size' => 60,
    '#maxlength' => 255,
    '#description' => t('Location to send users to if a profile is marked as private and they do not have the "view private profiles" permission. Set to "&lt;front&gt;" or leave blank (default) to redirect to the homepage; can be an internal system path, a path alias or an external URL.'),
  );

  return system_settings_form($form);
}
