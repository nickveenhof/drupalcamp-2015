<?php
/**
 * @file
 * cod_profile_optional.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function cod_profile_optional_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_t_shirt_size'
  $field_instances['user-user-field_t_shirt_size'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'user_attendees_overview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_t_shirt_size',
    'label' => 'T-shirt size',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 12,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('T-shirt size');

  return $field_instances;
}
