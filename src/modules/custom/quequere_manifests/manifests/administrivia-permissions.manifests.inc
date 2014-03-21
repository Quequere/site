<?php

/**
 * Permissions for site administrivia.
 */
function quequere_manifests_administrivia_permissions() {
  $editor = user_role_load_by_name('editor');

  $editor_perms = array();
  $editor_perms[] = 'use on-page translation';
  $editor_perms[] = 'submit translations to localization server';

  user_role_grant_permissions($editor->rid, $editor_perms);
}
