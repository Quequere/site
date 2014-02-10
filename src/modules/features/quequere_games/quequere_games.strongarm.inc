<?php
/**
 * @file
 * quequere_games.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function quequere_games_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_quequere_games';
  $strongarm->value = '0';
  $export['language_content_type_quequere_games'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_quequere_games';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_quequere_games'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_quequere_games';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_quequere_games'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_quequere_games';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_quequere_games'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_quequere_games';
  $strongarm->value = '0';
  $export['node_preview_quequere_games'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_quequere_games';
  $strongarm->value = 0;
  $export['node_submitted_quequere_games'] = $strongarm;

  return $export;
}
