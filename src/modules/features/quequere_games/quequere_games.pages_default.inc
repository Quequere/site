<?php
/**
 * @file
 * quequere_games.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function quequere_games_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'quequere_games_faq';
  $page->task = 'page';
  $page->admin_title = 'Quequeré Games FAQ';
  $page->admin_description = 'Game FAQ';
  $page->path = 'node/%node/faq';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_quequere_games_faq_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'quequere_games_faq';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'FAQ',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'quequere_games' => 'quequere_games',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Jogos
%node:title',
    'panels_breadcrumbs_paths' => 'jogos
node/%node:nid',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'radix_burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title : Perguntas Frequentes';
  $display->uuid = 'b72f9bd4-3536-47c6-991f-dc93f581d442';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-07253ccb-8eee-4de7-8fbd-ee300fbf744a';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'quequere_games_faq-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 1,
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
    $pane->uuid = '07253ccb-8eee-4de7-8fbd-ee300fbf744a';
    $display->content['new-07253ccb-8eee-4de7-8fbd-ee300fbf744a'] = $pane;
    $display->panels['contentmain'][0] = 'new-07253ccb-8eee-4de7-8fbd-ee300fbf744a';
    $pane = new stdClass();
    $pane->pid = 'new-038ca274-c113-421d-9344-a83de03602b7';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'quequere_games_faq-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = '';
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '038ca274-c113-421d-9344-a83de03602b7';
    $display->content['new-038ca274-c113-421d-9344-a83de03602b7'] = $pane;
    $display->panels['sidebar'][0] = 'new-038ca274-c113-421d-9344-a83de03602b7';
    $pane = new stdClass();
    $pane->pid = 'new-3ffa201a-df0b-4a70-b1e3-1d52e18de2ce';
    $pane->panel = 'sidebar';
    $pane->type = 'node_prepopulate';
    $pane->subtype = 'node_prepopulate';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'types' => array(
        'panopoly_faq' => 'panopoly_faq',
      ),
      'field_name' => 'field_quequere_game',
      'labels' => array(
        'panopoly_faq' => 'Mande sua pergunta para o Quequeré Dazarábias!',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Sua dúvida não está aqui?',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3ffa201a-df0b-4a70-b1e3-1d52e18de2ce';
    $display->content['new-3ffa201a-df0b-4a70-b1e3-1d52e18de2ce'] = $pane;
    $display->panels['sidebar'][1] = 'new-3ffa201a-df0b-4a70-b1e3-1d52e18de2ce';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['quequere_games_faq'] = $page;

  return $pages;

}
