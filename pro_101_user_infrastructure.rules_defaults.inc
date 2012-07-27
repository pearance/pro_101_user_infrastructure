<?php
/**
 * @file
 * pro_101_user_infrastructure.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function pro_101_user_infrastructure_default_rules_configuration() {
  $items = array();
  $items['rules_redirect_log_in_to_add_testimonial_page'] = entity_import('rules_config', '{ "rules_redirect_log_in_to_add_testimonial_page" : {
      "LABEL" : "Redirect log-in to add testimonial page",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_insert" ],
      "IF" : [
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "2" : "2" } } } }
      ],
      "DO" : [ { "redirect" : { "url" : "add\\/testimonial" } } ]
    }
  }');
  return $items;
}
