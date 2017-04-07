<?php
/**
 * @file
 * practicafeatures.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function practicafeatures_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'panelpractica';
  $page->task = 'page';
  $page->admin_title = 'panelPractica';
  $page->admin_description = 'ewr';
  $page->path = 'panelPractica';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_panelpractica__panel';
  $handler->task = 'page';
  $handler->subtask = 'panelpractica';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'plugins' => array(),
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'panelPractica';
  $display->uuid = '41615d97-cf91-48a3-8521-cb289db60c32';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_panelpractica__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-462e807b-c9de-49e3-92c2-62c4ac0c2f26';
  $pane->panel = 'right_above';
  $pane->type = 'views';
  $pane->subtype = 'viewpractica';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '462e807b-c9de-49e3-92c2-62c4ac0c2f26';
  $display->content['new-462e807b-c9de-49e3-92c2-62c4ac0c2f26'] = $pane;
  $display->panels['right_above'][0] = 'new-462e807b-c9de-49e3-92c2-62c4ac0c2f26';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['panelpractica'] = $page;

  return $pages;

}
