<?php

/**
 * Themes manifest.
 */
function quequere_manifests_themes() {
  theme_enable(array('radix', 'basic'));
  variable_set('theme_default', 'basic');
}
