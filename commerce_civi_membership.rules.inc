<?php

/**
 * Implement hook_rules_action_info().
 */
function commerce_civi_membership_rules_action_info() {
    return array(
        'commerce_civi_membership_rules_action_format_date' => array(
            'label' => t('Format Date for CiviMembership'),
            'group' => t('Commerce CiviCRM Membership'),
            'parameter' => array(
                'date' => array(
                    'type' => 'date',
                    'label' => t('Date to be formatted'),
                    'description' => t('Given a Date, this will format and convert it to Text that CiViCRM expects.'),
                ),
            ),
            'provides' => array(
                'civi_formatted_date' => array(
                    'type' => 'text',
                    'label' => t('CiVi formatted date(text)'),
                ),
            ),
        ),
    );
}

function commerce_civi_membership_rules_action_format_date($date) {
    $s = date('m/d/Y', $date);
    return array(
        'civi_formatted_date' => $s,
    );
}
