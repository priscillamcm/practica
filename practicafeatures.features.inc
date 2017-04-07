<?php
/**
 * @file
 * practicafeatures.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function practicafeatures_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function practicafeatures_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function practicafeatures_node_info() {
  $items = array(
    'practica' => array(
      'name' => t('Practica'),
      'base' => 'node_content',
      'description' => t('Practica'),
      'has_title' => '1',
      'title_label' => t('Practica'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
