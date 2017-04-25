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
      'polaroid_landscape' => array(
        'label' => 'polaroid-landscape',
        'custom settings' => 1,
      ),
      'polaroid_landscape_rotate_right' => array(
        'label' => 'polaroid-landscape-rotate-right',
        'custom settings' => 1,
      ),
      'polaroid_landscape_rotate_left' => array(
        'label' => 'polaroid-landscape-rotate-left',
        'custom settings' => 1,
      ),
      'polaroid_portrait' => array(
        'label' => 'polaroid-portrait',
        'custom settings' => 1,
      ),
      'polaroid_portrait_rotate_left' => array(
        'label' => 'polaroid-portrait-rotate-left',
        'custom settings' => 1,
      ),
      'polaroid_portrait_rotate_right' => array(
        'label' => 'polaroid-portrait-rotate-right',
        'custom settings' => 1,
      ),
      'scale_160x120' => array(
        'label' => 'scale_160x120',
        'custom settings' => 1,
      ),
      'scale_160x120_rotate_left' => array(
        'label' => 'scale_160x120_rotate_left',
        'custom settings' => 1,
      ),
      'scale_160x120_rotate_right' => array(
        'label' => 'scale_160x120_rotate_right',
        'custom settings' => 1,
      ),
      'scale_320x240' => array(
        'label' => 'Scale 320 x 240 (4:3)',
        'custom settings' => 1,
      ),
      'scale_320x240_rotate_left' => array(
        'label' => 'scale_320x240_rotate_left',
        'custom settings' => 1,
      ),
      'scale_320x240_rotate_right' => array(
        'label' => 'scale_320x240_rotate_right',
        'custom settings' => 1,
      ),
      'scale_480x360' => array(
        'label' => 'Scale 480 x 360 (4:3)',
        'custom settings' => 1,
      ),
      'scale_480x360_rotate_left' => array(
        'label' => 'scale_480x360_rotate_left',
        'custom settings' => 1,
      ),
      'scale_480x360_rotate_right' => array(
        'label' => 'scale_480x360_rotate_right',
        'custom settings' => 1,
      ),
      'scale_640x480' => array(
        'label' => 'Scale 640 x 480 (4:3)',
        'custom settings' => 1,
      ),
      'scale_640x480_rotate_left' => array(
        'label' => 'scale_640x480_rotate_left',
        'custom settings' => 1,
      ),
      'scale_640x480_rotate_right' => array(
        'label' => 'scale_640x480_rotate_right',
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
