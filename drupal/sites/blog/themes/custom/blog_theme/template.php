<?php
/**
 * @file
 *
 */

/**
 * Implements hook_preprocess_node()
 */
function blog_theme_preprocess_node(&$vars) {
    if($vars['node']) {
        $vars['theme_hook_suggestions'][] = 'node__' . $vars['node']->type . '__'.$vars['view_mode'];
    }
}

/**
 * Implements hook_theme()
 */
function blog_theme_theme($existing, $type, $theme, $path) {
    $items = array();
    // Custom template to form contact
    $items['blog_form_contact'] = array(
        'render element' => 'form',
        'path' => drupal_get_path('module', 'blog_contact') . '/templates/form--contact',
    );
    return $items;
}