<?php
/**
 * @file : Render items page contact.
 */

function _blog_contact_view()
{
    $render = array();
    $render[] = drupal_get_form('_contact_form');


    return $render;
}

function _contact_form()
{
    $form = array();
    $form['name'] = array(
        '#type' => 'textfield',
        '#title' => t('name'),
        '#description' => t('info a la con'),
        '#default_value' => "qu'elle es ton name ?",
    );
    $form['surname'] = array(
        '#type' => 'textfield',
        '#title' => t('surname'),
        '#description' => t('info a la con'),
        '#default_value' => "qu'elle es ton surnamename ?",
    );
    $form['rome1'] = array(
        '#type' => 'textfield',
        '#title' => t('rom'),
        '#description' => t('info a la con'),
        '#default_value' => "prout",
    );
    $form['rome2'] = array(
        '#type' => 'textfield',
        '#title' => t('rom'),
        '#description' => t('info a la con'),
        '#default_value' => "prout",
    );
    $form['rome3'] = array(
        '#type' => 'textfield',
        '#title' => t('rom'),
        '#description' => t('info a la con'),
        '#default_value' => "prout",
    );
    $form['rome4'] = array(
        '#type' => 'textfield',
        '#title' => t('rom'),
        '#description' => t('info a la con'),
        '#default_value' => "prout",
    );
    $form['op'] = array(
        '#value' => t('Submit'),
        '#type' => 'submit',
    );
    return $form;
}