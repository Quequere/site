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
      "DO" : [
        { "node_unpublish" : { "node" : [ "node" ] } },
        { "drupal_message" : { "message" : "Sua d\\u00favida foi encaminhada para o S\\u00eao Quequer\\u00e9, aguarde notifica\\u00e7\\u00f5es no seu email!" } },
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4" } },
            "subject" : "FAQ: [node:field-quequere-game:title]",
            "message" : "Nova pergunta: [node:title]\\r\\nPara responder, visite [site:url]\\/[node:edit-url].",
            "from" : "[node:field_quequere_faq_feedback]"
          }
        }
      ]
    }
  }');
  return $items;
}
