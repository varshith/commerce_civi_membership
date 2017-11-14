<?php

/**
 * Views for the default commerce civi membership.
 */

/**
 * Implements hook_views_default_views().
 */
function commerce_civi_membership_views_default_views() {
    $view = new view();
    $view->name = 'civicrm_membership_types';
    $view->description = '';
    $view->tag = 'default';
    $view->base_table = 'civicrm_membership_type';
    $view->human_name = 'Membership Types';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['access']['type'] = 'none';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'full';
    $handler->display->display_options['style_plugin'] = 'default';
    $handler->display->display_options['row_plugin'] = 'fields';
    /* Field: CiviCRM Membership Type: Membership Type Description */
    $handler->display->display_options['fields']['description']['id'] = 'description';
    $handler->display->display_options['fields']['description']['table'] = 'civicrm_membership_type';
    $handler->display->display_options['fields']['description']['field'] = 'description';
    $handler->display->display_options['fields']['description']['label'] = '';
    $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
    /* Field: CiviCRM Membership Type: membership Type Minimum Fee */
    $handler->display->display_options['fields']['minimum_fee']['id'] = 'minimum_fee';
    $handler->display->display_options['fields']['minimum_fee']['table'] = 'civicrm_membership_type';
    $handler->display->display_options['fields']['minimum_fee']['field'] = 'minimum_fee';
    $handler->display->display_options['fields']['minimum_fee']['label'] = '';
    $handler->display->display_options['fields']['minimum_fee']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['minimum_fee']['precision'] = '0';
    $handler->display->display_options['fields']['minimum_fee']['prefix'] = '$';

    /* Display: Entity Reference */
    $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_civi_membership');
    $handler->display->display_options['defaults']['title'] = FALSE;
    $handler->display->display_options['pager']['type'] = 'some';
    $handler->display->display_options['defaults']['style_plugin'] = FALSE;
    $handler->display->display_options['style_plugin'] = 'entityreference_style';
    $handler->display->display_options['style_options']['search_fields'] = array(
        'description' => 'description',
        'minimum_fee' => 0,
    );
    $handler->display->display_options['defaults']['style_options'] = FALSE;
    $handler->display->display_options['defaults']['row_plugin'] = FALSE;
    $handler->display->display_options['row_plugin'] = 'entityreference_fields';
    $handler->display->display_options['defaults']['row_options'] = FALSE;

    $views[$view->name] = $view;

    return $views;
}
