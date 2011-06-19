<?php
/**
 * @file
 *   LABjs module admin settings
 */

/**
 * Form for configuring the module.
 */
function labjs_admin_settings_form() {
  $form = array();

  $form['basic'] = array(
    '#type' => 'fieldset',
    '#title' => t('Basic settings'),
  );
  $form['basic']['labjs_enabled'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable LABjs loader'),
    '#default_value' => variable_get('labjs_enabled', TRUE),
  );

  $form['advanced'] = array(
    '#type' => 'fieldset',
    '#title' => t('Advanced settings'),
  );
  $form['advanced']['labjs_content'] = array(
    '#type' => 'checkbox',
    '#title' => t('Rewrite JavaScript blocks in page content'),
    '#default_value' => variable_get('labjs_content', FALSE),
  );
  $form['advanced']['labjs_closure'] = array(
    '#type' => 'checkbox',
    '#title' => t('Rewrite JavaScript blocks in page closure'),
    '#default_value' => variable_get('labjs_closure', FALSE),
  );

  return system_settings_form($form);
}