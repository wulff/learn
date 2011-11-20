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

  // Exported menu link: main-menu:contact
  $menu_links['main-menu:contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Kontakt',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'langcode' => 'da',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-learn-user:user
  $menu_links['menu-learn-user:user'] = array(
    'menu_name' => 'menu-learn-user',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Log ind',
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
  // Exported menu link: menu-learn-user:user/register
  $menu_links['menu-learn-user:user/register'] = array(
    'menu_name' => 'menu-learn-user',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'Opret konto',
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
    'weight' => '-49',
  );
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
  t('Kontakt');
  t('Log ind');
  t('Opret konto');
  t('Søg');


  return $menu_links;
}
