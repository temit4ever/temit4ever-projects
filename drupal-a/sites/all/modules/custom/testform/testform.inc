<?php
/**
 * Creating the page to be display by the page callback for Test Form module
 *
 */

/**
 * Building and returning the different properties of the testform forms API
 */

function testform_form_setting(){
  // form with textfield
  $form['form_setting'] = array(
    '#type' => 'textarea',
	'#title' => 'Forms Example',
	'#default_value' => variable_get('form_setting', ''),
	'#description' => t('A simple form kinds'),
	'#required' =>TRUE,

  );

  //form with check box
  $options_display = array(
	'bachelor undergraduate' => t('Bachelor Degree'),
	'master degree'		=> t('Master Degree') ,
	'doctorate degree'	=> t('Doctorate degree'),
  );

  $form['Degree\'s'] = array(
    '#type'   =>'checkboxes',
	'#title'  =>t('Higher Institution Degree'),
	'#description' =>t('Select the degree you currently hold'),
	'#option'      => $options_display,
  );

  return system_settings_form($form);

}
