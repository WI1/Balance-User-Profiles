<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function profiles_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:admin/settings/onepageprofile
  $menu_links['navigation:admin/settings/onepageprofile'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'admin/settings/onepageprofile',
    'router_path' => 'admin/settings/onepageprofile',
    'link_title' => 'One page profile',
    'options' => array(
      'attributes' => array(
        'title' => 'Assign weight to profile categories',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: navigation:admin/user/profile
  $menu_links['navigation:admin/user/profile'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'admin/user/profile',
    'router_path' => 'admin/user/profile',
    'link_title' => 'Profiles',
    'options' => array(
      'attributes' => array(
        'title' => 'Create customizable fields for your users.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/user',
  );
  // Exported menu link: navigation:relationships
  $menu_links['navigation:relationships'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'relationships',
    'router_path' => 'relationships',
    'link_title' => 'Kontakte',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: navigation:user/%
  $menu_links['navigation:user/%'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'user/%',
    'router_path' => 'user/%',
    'link_title' => 'Profil',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Kontakte');
  t('One page profile');
  t('Profil');
  t('Profiles');


  return $menu_links;
}
