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
  $items['rules_redirect_post_self_registration'] = entity_import('rules_config', '{ "rules_redirect_post_self_registration" : {
      "LABEL" : "Redirect post self registration",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_insert" ],
      "IF" : [
        { "NOT user_has_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : {
                "8998634" : "8998634",
                "96220023" : "96220023",
                "160159362" : "160159362",
                "121011395" : "121011395"
              }
            },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : "add\\/testimonial" } } ]
    }
  }');
  return $items;
}
