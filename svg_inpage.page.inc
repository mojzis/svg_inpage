<?php
/**
 * @file
 */

/**
 * function svg_inpage.page_create_page
 */
function svg_inpage_display_page($pagename) {
  $out = array();
  $svg_pages = svg_inpage_pages();
  if (isset($svg_pages[$pagename])) {
    $page = $svg_pages[$pagename];
    $svg_string = svg_inpage_svg_string($page['svg file']);
    $out = array(
      '#markup' => $svg_string,
    );
    if (isset($page['js callback'])) {
      $page['js callback']();
    }
  }
  else {
    // anounce problem
    drupal_set_message("Page name $pagename is not defined.", 'error');
    // @todo log it
  }
  return $out;
}

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
