<?php
/**
 * Created by PhpStorm.
 * User: TEMIT
 * Date: 12/03/2017
 * Time: 16:32
 *
 * @file
 * Admin page callback for Trails module
 */

/**
 * Builds and returns the trails settings form.
 */
function trails_admin_settings() {
  $form['trails_block_max'] = array(
    '#title' => t('maximum number of items to display'),
	'#type' => 'select',
	'#options' => drupal_map_assoc(range(1, 200)),
	'#default_value' => variable_get('trails_block_max', ''),
	'#description' => t('This set the max allowable number to be display in the history block'),
	'#required' => TRUE,
  );

  return system_settings_form($form);
}