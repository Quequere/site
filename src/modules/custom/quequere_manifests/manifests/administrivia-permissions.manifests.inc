<?php

/**
 * Permissions for site administrivia.
 */
function quequere_manifests_administrivia_permissions() {

  // Search should be disabled until we set up the solr server.
  user_role_revoke_permissions(DRUPAL_ANONYMOUS_RID, array('search content'));
  user_role_revoke_permissions(DRUPAL_AUTHENTICATED_RID, array('search content'));

  $editor = user_role_load_by_name('editor');

  $editor_perms = array();
  $editor_perms[] = 'use on-page translation';
  $editor_perms[] = 'submit translations to localization server';

  user_role_grant_permissions($editor->rid, $editor_perms);
}
