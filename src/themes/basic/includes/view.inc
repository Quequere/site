<?php
/**
 * @file
 * Theme and preprocess functions for views
 */

/**
 * Implements template_preprocess_views_view_unformatted().
 */
function basic_preprocess_views_view_unformatted(&$variables) {
  $view = $variables['view'];
  if ($view->name == 'quequere_games_faq' && $view->current_display == 'page') {
    foreach ($view->result as $index => $result) {
      $variables['row_ids'][$index] = $result->nid;
    }
  }
}
