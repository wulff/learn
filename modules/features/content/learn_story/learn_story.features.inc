<?php
/**
 * @file
 * learn_story.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function learn_story_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function learn_story_node_info() {
  $items = array(
    'learn_story' => array(
      'name' => t('Nyhed'),
      'base' => 'node_content',
      'description' => t('En nyhed, der vises på forsiden.'),
      'has_title' => '1',
      'title_label' => t('Rubrik'),
      'help' => '',
    ),
  );
  return $items;
}
