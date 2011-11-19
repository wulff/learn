<?php
/**
 * @file
 * learn_web.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function learn_web_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function learn_web_image_default_styles() {
  $styles = array();

  // Exported image style: learn_large
  $styles['learn_large'] = array(
    'name' => 'learn_large',
    'effects' => array(
      1 => array(
        'label' => 'Skalér',
        'help' => 'Skalering bevarer billedets højde-bredde-forhold. Hvis kun den ene dimension angives vil den anden blive beregnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '580',
          'height' => '580',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
