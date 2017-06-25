<?php
/**
 * Created by PhpStorm.
 * User: TEMIT
 * Date: 04/12/2016
 * Time: 06:29
 */


function ww_example_example_page(){
    $output = '';

    $query = db_select('node','n');
    $query
        ->fields('n',array('nid','title'))
        ->condition('n.type','article', '=');
    $result = $query->execute();
    dpq($query);

    return $output;
}

