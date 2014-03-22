<?php
/**
 * @file
 * quequere_games.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function quequere_games_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:quequere_games:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'quequere_games';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'radix_brenham_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '222d0a8a-b8c2-47c5-9372-5d539af236af';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2740d486-bca8-4b9a-a88b-da5297bb4d36';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2740d486-bca8-4b9a-a88b-da5297bb4d36';
    $display->content['new-2740d486-bca8-4b9a-a88b-da5297bb4d36'] = $pane;
    $display->panels['contentmain'][0] = 'new-2740d486-bca8-4b9a-a88b-da5297bb4d36';
    $pane = new stdClass();
    $pane->pid = 'new-0626a7ae-a0cc-4081-9410-c3dce6135e07';
    $pane->panel = 'header';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featured_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'file_view_mode' => 'default',
        'image_style' => 'panopoly_image_full',
        'image_link' => '',
      ),
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0626a7ae-a0cc-4081-9410-c3dce6135e07';
    $display->content['new-0626a7ae-a0cc-4081-9410-c3dce6135e07'] = $pane;
    $display->panels['header'][0] = 'new-0626a7ae-a0cc-4081-9410-c3dce6135e07';
    $pane = new stdClass();
    $pane->pid = 'new-1f834cda-5990-4b28-890e-8012b5106ea3';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'quequere_games_faq-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1f834cda-5990-4b28-890e-8012b5106ea3';
    $display->content['new-1f834cda-5990-4b28-890e-8012b5106ea3'] = $pane;
    $display->panels['sidebar'][0] = 'new-1f834cda-5990-4b28-890e-8012b5106ea3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:quequere_games:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:quequere_games:default:featured';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'quequere_games';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'featured';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '859b0f43-7be8-40b4-a34c-eb4283a32a35';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6fb1c331-e517-4e99-8243-de64e5a02152';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6fb1c331-e517-4e99-8243-de64e5a02152';
    $display->content['new-6fb1c331-e517-4e99-8243-de64e5a02152'] = $pane;
    $display->panels['center'][0] = 'new-6fb1c331-e517-4e99-8243-de64e5a02152';
    $pane = new stdClass();
    $pane->pid = 'new-eb271c5d-3b8e-4b56-a262-51cfb25dffc4';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'featured',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'eb271c5d-3b8e-4b56-a262-51cfb25dffc4';
    $display->content['new-eb271c5d-3b8e-4b56-a262-51cfb25dffc4'] = $pane;
    $display->panels['center'][1] = 'new-eb271c5d-3b8e-4b56-a262-51cfb25dffc4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-eb271c5d-3b8e-4b56-a262-51cfb25dffc4';
  $panelizer->display = $display;
  $export['node:quequere_games:default:featured'] = $panelizer;

  return $export;
}
