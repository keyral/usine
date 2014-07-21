<?php
/**
 * @file
 * blog_billet.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function blog_billet_image_default_styles() {
  $styles = array();

  // Exported image style: billet_bando.
  $styles['billet_bando'] = array(
    'name' => 'billet_bando',
    'label' => 'billet_bando',
    'effects' => array(
      1 => array(
        'label' => 'Recadrer',
        'help' => 'Le recadrage supprimera des portions de l\'image pour qu\'elle rentre dans la taille spécifiée.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => 750,
          'height' => 180,
          'anchor' => 'center-center',
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function blog_billet_node_info() {
  $items = array(
    'billet' => array(
      'name' => t('billet'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
