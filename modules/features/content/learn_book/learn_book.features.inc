<?php
/**
 * @file
 * learn_book.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function learn_book_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function learn_book_node_info() {
  $items = array(
    'learn_book' => array(
      'name' => t('Bogside'),
      'base' => 'node_content',
      'description' => t('En side der kan placeres i en bog.'),
      'has_title' => '1',
      'title_label' => t('Rubrik'),
      'help' => '',
    ),
  );
  return $items;
}
