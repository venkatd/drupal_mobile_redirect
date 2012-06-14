<?php

function mobile_redirect_form() {
    $form = array();

    $form['mobile_redirect_path'] = array(
        '#type' => 'textfield',
        '#title' => t('Path to mobile friendly page'),
        '#size' => 80,
        '#maxlength' => 255,
        '#default_value' => variable_get('mobile_redirect_path', ''),
        '#description' => t('The path to redirect to if the user is on a mobile browser.'),
    );

    $form['mobile_redirect_exclude'] = array(
      '#type' => 'textarea',
      '#title' => t('Exclude paths'),
      '#default_value' => variable_get('mobile_redirect_exclude', ''),
      '#description' => t('The paths to exclude from being redirect. List one per line.'),
    );

    return system_settings_form($form);
}
