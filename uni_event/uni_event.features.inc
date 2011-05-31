<?php

/**
 * Implementation of hook_node_info().
 */
function uni_event_node_info() {
  $items = array(
    'events' => array(
      'name' => t('Events'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function uni_event_views_api() {
  return array(
    'api' => '2',
  );
}
