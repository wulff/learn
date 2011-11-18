<?php
/**
 * @file
 * learn_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function learn_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function learn_page_node_info() {
  $items = array(
    'learn_page' => array(
      'name' => t('Side'),
      'base' => 'node_content',
      'description' => t('En statisk side.'),
      'has_title' => '1',
      'title_label' => t('Rubrik'),
      'help' => '',
    ),
  );
  return $items;
}
