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

  // Exported menu: main-menu
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Hovedmenu',
    'description' => 'Menuen <em>Main</em> bruges på mange sites til at vise sitets overordnede sektioner, typisk i en navigationsbjælke i toppen af siden.',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Exported menu: menu-learn-user
  $menus['menu-learn-user'] = array(
    'menu_name' => 'menu-learn-user',
    'title' => 'User',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Exported menu: user-menu
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'Menuen <em>Bruger</em> indeholder links relateret til brugerens konto samt linket \'Log ud\'.',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Hovedmenu');
  t('Menuen <em>Bruger</em> indeholder links relateret til brugerens konto samt linket \'Log ud\'.');
  t('Menuen <em>Main</em> bruges på mange sites til at vise sitets overordnede sektioner, typisk i en navigationsbjælke i toppen af siden.');
  t('User');
  t('User menu');


  return $menus;
}
