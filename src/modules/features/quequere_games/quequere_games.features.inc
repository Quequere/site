<?php
/**
 * @file
 * quequere_games.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function quequere_games_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function quequere_games_default_page_manager_handlers_alter(&$data) {
  if (isset($data['node_edit_panel_context'])) {
    $data['node_edit_panel_context']->conf['display']->content['new-29a70ac9-d89b-4ac3-a836-0a9d02a4ff2c'] = (object) array(
          'pid' => 'new-29a70ac9-d89b-4ac3-a836-0a9d02a4ff2c',
          'panel' => 'sidebar',
          'type' => 'entity_form_field',
          'subtype' => 'node:group_game_files',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => '',
          'cache' => array(),
          'style' => '',
          'css' => array(),
          'extras' => array(),
          'position' => 3,
          'locks' => array(),
          'uuid' => '29a70ac9-d89b-4ac3-a836-0a9d02a4ff2c',
        ); /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->content['new-40aac9b3-5fe4-49f8-a9a5-9b5e8c9ad6e4'] = (object) array(
          'pid' => 'new-40aac9b3-5fe4-49f8-a9a5-9b5e8c9ad6e4',
          'panel' => 'sidebar',
          'type' => 'entity_form_field',
          'subtype' => 'node:group_game_details',
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
          'style' => '',
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => '40aac9b3-5fe4-49f8-a9a5-9b5e8c9ad6e4',
        ); /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->content['new-51126c95-cf51-4ad6-a27a-11e4260d8023']->position = 4; /* WAS: 1 */
    $data['node_edit_panel_context']->conf['display']->content['new-5ff4903a-45cc-4235-adac-c8bcd27774c3'] = (object) array(
          'pid' => 'new-5ff4903a-45cc-4235-adac-c8bcd27774c3',
          'panel' => 'sidebar',
          'type' => 'entity_form_field',
          'subtype' => 'node:group_game_links',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => '',
          'cache' => array(),
          'style' => '',
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
          'uuid' => '5ff4903a-45cc-4235-adac-c8bcd27774c3',
        ); /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->content['new-6e4a98d8-3738-41b9-8c33-4b4c905c6834']->position = 8; /* WAS: 5 */
    $data['node_edit_panel_context']->conf['display']->content['new-9176b962-e64f-44a6-8ebe-e03ebf0f6c3d']->position = 7; /* WAS: 4 */
    $data['node_edit_panel_context']->conf['display']->content['new-99f6c0bd-36fd-411b-9833-c0be0fab7548']->position = 5; /* WAS: 2 */
    $data['node_edit_panel_context']->conf['display']->content['new-c0926cca-059c-4bb1-bccd-2838ec7a93f2']->position = 9; /* WAS: 6 */
    $data['node_edit_panel_context']->conf['display']->content['new-e38ab3a3-24d0-4ac2-900e-4ddb0248be0c']->position = 6; /* WAS: 3 */
    $data['node_edit_panel_context']->conf['display']->layout = 'radix_burr_flipped'; /* WAS: 'burr_flipped' */
    $data['node_edit_panel_context']->conf['display']->panels['sidebar']['7'] = 'new-29a70ac9-d89b-4ac3-a836-0a9d02a4ff2c'; /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->panels['sidebar']['8'] = 'new-40aac9b3-5fe4-49f8-a9a5-9b5e8c9ad6e4'; /* WAS: '' */
    $data['node_edit_panel_context']->conf['display']->panels['sidebar']['9'] = 'new-5ff4903a-45cc-4235-adac-c8bcd27774c3'; /* WAS: '' */
  }
}

/**
 * Implements hook_node_info().
 */
function quequere_games_node_info() {
  $items = array(
    'quequere_games' => array(
      'name' => t('Jogo'),
      'base' => 'node_content',
      'description' => t('Um projeto fenomenal da Quequeré jogos.'),
      'has_title' => '1',
      'title_label' => t('Nome'),
      'help' => '',
    ),
  );
  return $items;
}
