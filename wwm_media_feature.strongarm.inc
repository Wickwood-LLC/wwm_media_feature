<?php
/**
 * @file
 * wwm_media_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function wwm_media_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_view_modes';
  $strongarm->value = array(
    'file' => array(
      'inline_image_with_caption' => array(
        'label' => 'Inline Image with Caption',
        'custom settings' => 1,
      ),
      'original' => array(
        'label' => 'Original',
        'custom settings' => 1,
      ),
    ),
    'node' => array(
      'featured_half_width' => array(
        'label' => 'Featured Half Width',
        'custom settings' => 1,
      ),
    ),
  );
  $export['entity_view_modes'] = $strongarm;

  return $export;
}
