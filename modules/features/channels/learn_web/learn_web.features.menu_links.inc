<?php
/**
 * @file
 * learn_web.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function learn_web_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-menu:search
  $menu_links['user-menu:search'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Søg',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Søg');


  return $menu_links;
}
