<?php

function _dev_viewform_view(){
    $form = drupal_get_form('dev_viewform');
    $render = '';
    $render =

        render($form);
    $render .= theme('custom_form1',array('form' => $form));
    $render .= theme('custom_form2',array('form' => $form));
    $render .= 'cool';

    return $render;
}