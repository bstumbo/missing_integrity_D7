<?php

function missing_integrity_admin_settings($form, &$form_state) {
  $form['missing_integrity_items_limit'] = array(
    '#type' => 'textfield',
    '#title' => t('Max. number of compared items'),
    '#description' => t('The limit on the number of compared items (0 - no limit)'),
    '#default_value' => variable_get('node_compare_items_limit', 0),
    '#size' => 2,
    '#maxlength' => 2,
    '#element_validate' => array('element_validate_integer'),
  );
  $form['missing_integrity_show_history'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show history'),
    '#description' => t('Show links to the pages of previous comparisons'),
    '#default_value' => 0,
  );
  $form['array_filter'] = array(
    '#type' => 'value',
    '#value' => TRUE,
  );
  return system_settings_form($form);
}


