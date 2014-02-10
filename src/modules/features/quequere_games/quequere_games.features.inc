<?php
/**
 * @file
 * quequere_games.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function quequere_games_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
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
