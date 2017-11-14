<?php
/**
 * Created by PhpStorm.
 * User: varshith
 * Date: 13/11/17
 * Time: 9:04 PM
 */

function commerce_civi_membership_default_rules_configuration() {
    $configs = array();
    $rules_path = drupal_get_path('module', 'commerce_civi_membership') . '/includes/rules';
    $files = file_scan_directory($rules_path, '/\.rule$/');

    foreach ($files as $filepath => $file) {
        require $filepath;
        if (isset($rule)) {
            $config[$file->name] = rules_import($rule);
        }
    }
    return $configs;
}
