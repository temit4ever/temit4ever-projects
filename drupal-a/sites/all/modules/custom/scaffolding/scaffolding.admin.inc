<?php
// $Id$

/**
 * @file
 * Admin page callback for the scaffolding module.
 */

/**
 * Builds and returns the scaffolding settings form.
 */
function scaffolding_admin_settings() {
  $form['scaffolding_example_setting'] = array(
    '#type' => 'textarea',
    '#title' => t('Example setting'),
    '#default_value' => variable_get('scaffolding_example_setting', ''),
    '#description' => t('This is an example setting.'),
    '#required' => TRUE,
  );

 $form['Schools'] = [
    '#title' => t('Higher Institutions'),
	'#type'  => 'checkboxes',
	'#description' =>t('Select the programmes that best suit You'),
	'#options' => array(
	  'full-time' => t('Full-Time'),
	  'part-time' => t('Part-Time'),
	  'short-time' => t('Short-Time'),
	)
 ];

  return system_settings_form($form);
}



