<?php
/**
 * @file
 * pro_101_user_infrastructure.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function pro_101_user_infrastructure_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: menu-auxiliary:user/login
  $menu_links['menu-auxiliary:user/login'] = array(
    'menu_name' => 'menu-auxiliary',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Login');


  return $menu_links;
}
