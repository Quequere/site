<?php

/**
 * Permissions to add, edit and delete content.
 */
function quequere_manifests_content_permissions() {
  // Add permissions for the basic types.
  $editor = user_role_load_by_name('editor');
  $content_types = array('panopoly_faq', 'panopoly_news_article', 'quequere_games');
  foreach ($content_types as $content_type) {
    user_role_grant_permissions($editor->rid, array_keys(node_list_permissions($content_type)));
  }
  // Creating pages leads to messy sites, let's limit that.
  user_role_revoke_permissions($editor->rid, array('create panopoly_page content'));

  // Anonymous and logged in users should be able to add FAQ
  user_role_grant_permissions(DRUPAL_ANONYMOUS_RID, array('create panopoly_faq content'));
  user_role_grant_permissions(DRUPAL_AUTHENTICATED_RID, array('create panopoly_faq content'));
}
