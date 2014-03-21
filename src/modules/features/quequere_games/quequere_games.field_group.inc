<?php
/**
 * @file
 * quequere_games.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function quequere_games_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_game_details|node|quequere_games|form';
  $field_group->group_name = 'group_game_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'quequere_games';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Detalhes do jogo',
    'weight' => '6',
    'children' => array(
      0 => 'field_game_illustrators',
      1 => 'field_game_playing_time',
      2 => 'field_game_players',
      3 => 'field_game_authors',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-game-details field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_game_details|node|quequere_games|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_game_files|node|quequere_games|form';
  $field_group->group_name = 'group_game_files';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'quequere_games';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Downloads',
    'weight' => '8',
    'children' => array(
      0 => 'field_game_manual',
      1 => 'field_game_print_and_play',
      2 => 'field_game_templates',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-game-files field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_game_files|node|quequere_games|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_game_links|node|quequere_games|form';
  $field_group->group_name = 'group_game_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'quequere_games';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Links externos',
    'weight' => '7',
    'children' => array(
      0 => 'field_game_crowdfuding',
      1 => 'field_game_repository',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-game-links field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_game_links|node|quequere_games|form'] = $field_group;

  return $export;
}
