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
  $items['rules_redirect_post_consumer_content_creation'] = entity_import('rules_config', '{ "rules_redirect_post_consumer_content_creation" : {
      "LABEL" : "Redirect post consumer content creation",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "consumer" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "testimonial" : "testimonial" } }
          }
        },
        { "NOT user_has_role" : {
            "account" : [ "node:author" ],
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
      "DO" : [
        { "redirect" : { "url" : "admin\\/workbench" } },
        { "drupal_message" : {
            "message" : "Thank you for your testimonial. It will be reviewed and proofed before being published.",
            "repeat" : 0
          }
        }
      ]
    }
  }');
  $items['rules_redirect_post_consumer_registration'] = entity_import('rules_config', '{ "rules_redirect_post_consumer_registration" : {
      "LABEL" : "Redirect post consumer registration",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "consumer" ],
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
