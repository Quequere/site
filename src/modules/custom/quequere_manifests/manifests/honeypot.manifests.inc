<?php

/**
 * Honeypot settings.
 */
function quequere_manifests_honeypot() {
  variable_set('honeypot_form_user_pass', 1);
  variable_set('honeypot_form_user_register_form', 1);
  // Enable for every node type edit form.
  foreach (node_type_get_names() as $type => $name) {
    variable_set('honeypot_form_' . $type . '_node_form', 1);
  }
}
