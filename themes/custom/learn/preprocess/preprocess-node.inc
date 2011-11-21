<?php

function learn_alpha_preprocess_node(&$variables) {
  $variables['date'] = format_date($variables['node']->created, 'custom', 'l, j. F Y, G:i');
}
