<?php
/**
 * Created by PhpStorm.
 * User: TEMIT
 * Date: 04/12/2016
 * Time: 06:29
 */

/**
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
**/
/**
$query = db_select('node', 'n');

$query->join('users', 'u', 'n.uid = u.uid'); //JOIN node with users

$query->groupBy('u.uid');//GROUP BY user ID

$query->fields('n',array('title','created'))//SELECT the fields from node
->fields('u',array('name'))//SELECT the fields from user
->orderBy('created', 'DESC')//ORDER BY created
->range(0,2);//LIMIT to 2 records

$result = $query->execute();

while($record = $result->fetchAssoc()) {
  print_r($record);

}
**/

/**
$result = db_query('SELECT name FROM {users} WHERE uid = %d', 2);
while ( $obj = db_fetch_object ($result) ) {
  print $obj->name;
}

**/

$query = db_select('node', 'n')
  ->fields('n')
  ->condition('nid', $node->nid,'=')
  ->condition('status', 0,'>')
  ->condition('uid', array(1,5,7),'IN')
  ->execute();
$result = $query->execute();
while($record = $result->fetchAssoc()) {
  print_r($record);

}

$query = db_select('employee', 'e');
$query->leftJoin('project', 'p', 'p.id = e.id');
$query->fields('e', array('id', 'names'));
$query->condition('p.id', NULL);
$result= $query->execute()->fetchAllKeyed(0,1);


?>


