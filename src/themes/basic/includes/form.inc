<?php
/**
 * @file
 * Theme and preprocess functions for forms
 */

/**
 * Implements hook_form_FORM_ID_alter().
 */
function basic_form_panopoly_faq_node_form_alter(&$form, &$form_state) {
  global $user;
  if ($user->uid != 1) {
    $form['field_featured_image']['#access'] = FALSE;
    $form['revision_information']['#access'] = FALSE;
  }
  if ($user->uid == 0) {
    $form['body']['#access'] = FALSE;
  }
  if ($user->uid != 0) {
    $form['field_quequere_faq_feedback']['#access'] = FALSE;
  }
}
