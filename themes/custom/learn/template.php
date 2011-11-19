<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 *
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

/**
 * Override theme_image_style().
 */
function learn_image_style($variables) {
  // Determine the dimensions of the styled image.
  $dimensions = array(
    'width' => $variables['width'],
    'height' => $variables['height'],
  );

  image_style_transform_dimensions($variables['style_name'], $dimensions);

  $variables['width'] = $dimensions['width'];
  $variables['height'] = $dimensions['height'];

  $original_path = $variables['path'];
  $variables['path'] = image_style_url($variables['style_name'], $variables['path']);
  $image = theme('image', $variables);

  if ('large' == $variables['style_name']) {
    $url = file_create_url($original_path);
    return l($image, $url, array('html' => TRUE, 'attributes' => array('class' => 'fancybox')));
  }
  else {
    return $image;
  }
}
