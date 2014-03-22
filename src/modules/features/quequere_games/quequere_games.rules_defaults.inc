<?php
/**
 * @file
 * quequere_games.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function quequere_games_default_rules_configuration() {
  $items = array();
  $items['rules_when_saving_anonymous_faq_leave_unpublished'] = entity_import('rules_config', '{ "rules_when_saving_anonymous_faq_leave_unpublished" : {
      "LABEL" : "When saving anonymous\\u0027 FAQ, leave unpublished",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "quequere_games" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--panopoly_faq" : { "bundle" : "panopoly_faq" } },
      "IF" : [
        { "user_has_role" : { "account" : [ "node:author" ], "roles" : { "value" : { "1" : "1" } } } }
      ],
      "DO" : [ { "node_unpublish" : { "node" : [ "node" ] } } ]
    }
  }');
  return $items;
}
