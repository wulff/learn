<?php
/**
 * @file
 * learn_web.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function learn_web_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-learn-user
  $menus['menu-learn-user'] = array(
    'menu_name' => 'menu-learn-user',
    'title' => 'User',
    'description' => '',
  );
  // Exported menu: user-menu
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'Menuen <em>Bruger</em> indeholder links relateret til brugerens konto samt linket \'Log ud\'.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Menuen <em>Bruger</em> indeholder links relateret til brugerens konto samt linket \'Log ud\'.');
  t('User');
  t('User menu');


  return $menus;
}
