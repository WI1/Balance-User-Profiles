<?php

/**
 * Implementation of hook_default_fe_block_settings().
 */
function profiles_default_fe_block_settings() {
  $export = array();

  // balance
  $theme = array();

  $theme['heartbeat-groupsactivity'] = array(
    'module' => 'heartbeat',
    'delta' => 'groupsactivity',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-33',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '6',
  );

  $theme['heartbeat-membersactivity'] = array(
    'module' => 'heartbeat',
    'delta' => 'membersactivity',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-2',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '6',
  );

  $theme['heartbeat-ogheartbeat'] = array(
    'module' => 'heartbeat',
    'delta' => 'ogheartbeat',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-34',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '6',
  );

  $theme['heartbeat-privateheartbeat'] = array(
    'module' => 'heartbeat',
    'delta' => 'privateheartbeat',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '16',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '6',
  );

  $theme['heartbeat-publicheartbeat'] = array(
    'module' => 'heartbeat',
    'delta' => 'publicheartbeat',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '17',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '6',
  );

  $theme['heartbeat-singleheartbeat'] = array(
    'module' => 'heartbeat',
    'delta' => 'singleheartbeat',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '18',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '6',
  );

  $theme['profile-0'] = array(
    'module' => 'profile',
    'delta' => '0',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-68',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '5',
  );

  $export['balance'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
