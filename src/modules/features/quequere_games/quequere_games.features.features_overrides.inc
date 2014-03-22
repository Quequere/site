<?php
/**
 * @file
 * quequere_games.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function quequere_games_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-29a70ac9-d89b-4ac3-a836-0a9d02a4ff2c"] = (object) array(
      'pid' => 'new-29a70ac9-d89b-4ac3-a836-0a9d02a4ff2c',
      'panel' => 'sidebar',
      'type' => 'entity_form_field',
      'subtype' => 'node:group_game_files',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => '',
      'cache' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 4,
      'locks' => array(),
      'uuid' => '29a70ac9-d89b-4ac3-a836-0a9d02a4ff2c',
    );
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-40aac9b3-5fe4-49f8-a9a5-9b5e8c9ad6e4"] = (object) array(
      'pid' => 'new-40aac9b3-5fe4-49f8-a9a5-9b5e8c9ad6e4',
      'panel' => 'sidebar',
      'type' => 'entity_form_field',
      'subtype' => 'node:group_game_details',
      'shown' => TRUE,
      'access' => array(),
      'cache' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
      'uuid' => '40aac9b3-5fe4-49f8-a9a5-9b5e8c9ad6e4',
    );
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-51126c95-cf51-4ad6-a27a-11e4260d8023|position"] = 5;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-5ff4903a-45cc-4235-adac-c8bcd27774c3"] = (object) array(
      'pid' => 'new-5ff4903a-45cc-4235-adac-c8bcd27774c3',
      'panel' => 'sidebar',
      'type' => 'entity_form_field',
      'subtype' => 'node:group_game_links',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => '',
      'cache' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 3,
      'locks' => array(),
      'uuid' => '5ff4903a-45cc-4235-adac-c8bcd27774c3',
    );
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-6e4a98d8-3738-41b9-8c33-4b4c905c6834|position"] = 9;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-9176b962-e64f-44a6-8ebe-e03ebf0f6c3d|position"] = 8;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-99f6c0bd-36fd-411b-9833-c0be0fab7548|position"] = 6;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-bc024b87-13bf-49b3-943b-51ba79de7259"] = (object) array(
      'pid' => 'new-bc024b87-13bf-49b3-943b-51ba79de7259',
      'panel' => 'sidebar',
      'type' => 'entity_form_field',
      'subtype' => 'node:group_game_authorship',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => '',
        'formatter' => '',
        'context' => 'argument_node_edit_1',
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => 'bc024b87-13bf-49b3-943b-51ba79de7259',
    );
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-c0926cca-059c-4bb1-bccd-2838ec7a93f2|position"] = 10;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|content|new-e38ab3a3-24d0-4ac2-900e-4ddb0248be0c|position"] = 7;
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|layout"] = 'radix_burr_flipped';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|1"] = 'new-bc024b87-13bf-49b3-943b-51ba79de7259';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|10"] = 'new-c0926cca-059c-4bb1-bccd-2838ec7a93f2';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|2"] = 'new-40aac9b3-5fe4-49f8-a9a5-9b5e8c9ad6e4';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|3"] = 'new-5ff4903a-45cc-4235-adac-c8bcd27774c3';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|4"] = 'new-29a70ac9-d89b-4ac3-a836-0a9d02a4ff2c';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|5"] = 'new-51126c95-cf51-4ad6-a27a-11e4260d8023';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|6"] = 'new-99f6c0bd-36fd-411b-9833-c0be0fab7548';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|7"] = 'new-e38ab3a3-24d0-4ac2-900e-4ddb0248be0c';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|8"] = 'new-9176b962-e64f-44a6-8ebe-e03ebf0f6c3d';
  $overrides["page_manager_handlers.node_edit_panel_context.conf|display|panels|sidebar|9"] = 'new-6e4a98d8-3738-41b9-8c33-4b4c905c6834';

  // Exported overrides for: page_manager_pages
  $overrides["page_manager_pages.quequere_games_faq.default_handlers|page_quequere_games_faq_panel_context|conf|display|content|new-038ca274-c113-421d-9344-a83de03602b7|style"] = '';

 return $overrides;
}
