<?php
/**
 * @file
 */

/**
 *
 */
/**
 * function svg_inpage_test
 */
function svg_inpage_test() {
  $out = array();
  // read the file
  // add test if file exists ;)
  $modpath = drupal_get_path('module','svg_inpage');
  $svg_file = file( $modpath .'/examples/test.svg');

  // remove the beginning lines

  // TODO: make this optional / configurable
  $svg_string = '';
  $foundSvgTag = false;
  foreach ($svg_file as $line) {
    if (substr($line, 0,4) == '<svg') {
      $foundSvgTag = true;
    }
    if ($foundSvgTag) {
      $svg_string .= $line;
      // TODO: make newline optional here ?
    }
  }


  $out = array(
    '#markup' => $svg_string,
    );
  return $out;
}
