<?php
/**
 * @file
 *
 */


function blog_theme_preprocess_node(&$vars) {
    if($vars['node']) {
        $vars['theme_hook_suggestions'][] = 'node__' . $vars['node']->type . '__'.$vars['view_mode'];
    }
}