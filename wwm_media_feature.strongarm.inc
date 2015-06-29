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
  $strongarm->name = 'field_bundle_settings_file__audio';
  $strongarm->value = array(
    'view_modes' => array(
      'media_gallery_thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_lightbox' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_detail' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_block_thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_collection_thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'inline_image_with_caption' => array(
        'custom_settings' => FALSE,
      ),
      'original' => array(
        'custom_settings' => FALSE,
      ),
      'polaroid_landscape' => array(
        'custom_settings' => FALSE,
      ),
      'polaroid_landscape_rotate_left' => array(
        'custom_settings' => FALSE,
      ),
      'polaroid_landscape_rotate_right' => array(
        'custom_settings' => FALSE,
      ),
      'polaroid_portrait' => array(
        'custom_settings' => FALSE,
      ),
      'polaroid_portrait_rotate_left' => array(
        'custom_settings' => FALSE,
      ),
      'polaroid_portrait_rotate_right' => array(
        'custom_settings' => FALSE,
      ),
      'scale_160x120' => array(
        'custom_settings' => FALSE,
      ),
      'scale_160x120_rotate_left' => array(
        'custom_settings' => FALSE,
      ),
      'scale_160x120_rotate_right' => array(
        'custom_settings' => FALSE,
      ),
      'scale_320x240' => array(
        'custom_settings' => FALSE,
      ),
      'scale_320x240_rotate_left' => array(
        'custom_settings' => FALSE,
      ),
      'scale_320x240_rotate_right' => array(
        'custom_settings' => FALSE,
      ),
      'scale_480x360' => array(
        'custom_settings' => FALSE,
      ),
      'scale_480x360_rotate_left' => array(
        'custom_settings' => FALSE,
      ),
      'scale_480x360_rotate_right' => array(
        'custom_settings' => FALSE,
      ),
      'scale_640x480' => array(
        'custom_settings' => FALSE,
      ),
      'scale_640x480_rotate_left' => array(
        'custom_settings' => FALSE,
      ),
      'scale_640x480_rotate_right' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_file__audio'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__document';
  $strongarm->value = array(
    'view_modes' => array(
      'inline_image_with_caption' => array(
        'custom_settings' => FALSE,
      ),
      'original' => array(
        'custom_settings' => FALSE,
      ),
      'polaroid_landscape' => array(
        'custom_settings' => FALSE,
      ),
      'polaroid_landscape_rotate_left' => array(
        'custom_settings' => FALSE,
      ),
      'polaroid_landscape_rotate_right' => array(
        'custom_settings' => FALSE,
      ),
      'polaroid_portrait' => array(
        'custom_settings' => FALSE,
      ),
      'polaroid_portrait_rotate_left' => array(
        'custom_settings' => FALSE,
      ),
      'polaroid_portrait_rotate_right' => array(
        'custom_settings' => FALSE,
      ),
      'scale_160x120' => array(
        'custom_settings' => FALSE,
      ),
      'scale_160x120_rotate_left' => array(
        'custom_settings' => FALSE,
      ),
      'scale_160x120_rotate_right' => array(
        'custom_settings' => FALSE,
      ),
      'scale_320x240' => array(
        'custom_settings' => FALSE,
      ),
      'scale_320x240_rotate_left' => array(
        'custom_settings' => FALSE,
      ),
      'scale_320x240_rotate_right' => array(
        'custom_settings' => FALSE,
      ),
      'scale_480x360' => array(
        'custom_settings' => FALSE,
      ),
      'scale_480x360_rotate_left' => array(
        'custom_settings' => FALSE,
      ),
      'scale_480x360_rotate_right' => array(
        'custom_settings' => FALSE,
      ),
      'scale_640x480' => array(
        'custom_settings' => FALSE,
      ),
      'scale_640x480_rotate_left' => array(
        'custom_settings' => FALSE,
      ),
      'scale_640x480_rotate_right' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_file__document'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__image';
  $strongarm->value = array(
    'view_modes' => array(
      'media_gallery_thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_lightbox' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_detail' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_block_thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_collection_thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'inline_image_with_caption' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'preview' => array(
        'custom_settings' => TRUE,
      ),
      'wysiwyg' => array(
        'custom_settings' => TRUE,
      ),
      'link' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'original' => array(
        'custom_settings' => TRUE,
      ),
      'polaroid_landscape' => array(
        'custom_settings' => TRUE,
      ),
      'polaroid_landscape_rotate_left' => array(
        'custom_settings' => TRUE,
      ),
      'polaroid_landscape_rotate_right' => array(
        'custom_settings' => TRUE,
      ),
      'polaroid_portrait' => array(
        'custom_settings' => TRUE,
      ),
      'polaroid_portrait_rotate_left' => array(
        'custom_settings' => TRUE,
      ),
      'polaroid_portrait_rotate_right' => array(
        'custom_settings' => TRUE,
      ),
      'scale_160x120' => array(
        'custom_settings' => TRUE,
      ),
      'scale_160x120_rotate_left' => array(
        'custom_settings' => TRUE,
      ),
      'scale_160x120_rotate_right' => array(
        'custom_settings' => TRUE,
      ),
      'scale_320x240' => array(
        'custom_settings' => TRUE,
      ),
      'scale_320x240_rotate_left' => array(
        'custom_settings' => TRUE,
      ),
      'scale_320x240_rotate_right' => array(
        'custom_settings' => TRUE,
      ),
      'scale_480x360' => array(
        'custom_settings' => TRUE,
      ),
      'scale_480x360_rotate_left' => array(
        'custom_settings' => TRUE,
      ),
      'scale_480x360_rotate_right' => array(
        'custom_settings' => TRUE,
      ),
      'scale_640x480' => array(
        'custom_settings' => TRUE,
      ),
      'scale_640x480_rotate_left' => array(
        'custom_settings' => TRUE,
      ),
      'scale_640x480_rotate_right' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'filename' => array(
          'weight' => '0',
        ),
        'preview' => array(
          'weight' => '1',
        ),
        'redirect' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(
        'file' => array(
          'inline_image_with_caption' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'original' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'polaroid_landscape' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'polaroid_landscape_rotate_left' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'polaroid_landscape_rotate_right' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'polaroid_portrait' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'polaroid_portrait_rotate_left' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'polaroid_portrait_rotate_right' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'scale_160x120' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'scale_160x120_rotate_left' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'scale_160x120_rotate_right' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'scale_320x240' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'scale_320x240_rotate_left' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'scale_320x240_rotate_right' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'scale_480x360' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'scale_480x360_rotate_left' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'scale_480x360_rotate_right' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'scale_640x480' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'scale_640x480_rotate_left' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'scale_640x480_rotate_right' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__video';
  $strongarm->value = array(
    'view_modes' => array(
      'media_gallery_thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_lightbox' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_detail' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_block_thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_collection_thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'inline_image_with_caption' => array(
        'custom_settings' => FALSE,
      ),
      'original' => array(
        'custom_settings' => FALSE,
      ),
      'polaroid_landscape' => array(
        'custom_settings' => FALSE,
      ),
      'polaroid_landscape_rotate_left' => array(
        'custom_settings' => FALSE,
      ),
      'polaroid_landscape_rotate_right' => array(
        'custom_settings' => FALSE,
      ),
      'polaroid_portrait' => array(
        'custom_settings' => FALSE,
      ),
      'polaroid_portrait_rotate_left' => array(
        'custom_settings' => FALSE,
      ),
      'polaroid_portrait_rotate_right' => array(
        'custom_settings' => FALSE,
      ),
      'scale_160x120' => array(
        'custom_settings' => FALSE,
      ),
      'scale_160x120_rotate_left' => array(
        'custom_settings' => FALSE,
      ),
      'scale_160x120_rotate_right' => array(
        'custom_settings' => FALSE,
      ),
      'scale_320x240' => array(
        'custom_settings' => FALSE,
      ),
      'scale_320x240_rotate_left' => array(
        'custom_settings' => FALSE,
      ),
      'scale_320x240_rotate_right' => array(
        'custom_settings' => FALSE,
      ),
      'scale_480x360' => array(
        'custom_settings' => FALSE,
      ),
      'scale_480x360_rotate_left' => array(
        'custom_settings' => FALSE,
      ),
      'scale_480x360_rotate_right' => array(
        'custom_settings' => FALSE,
      ),
      'scale_640x480' => array(
        'custom_settings' => FALSE,
      ),
      'scale_640x480_rotate_left' => array(
        'custom_settings' => FALSE,
      ),
      'scale_640x480_rotate_right' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_file__video'] = $strongarm;

  return $export;
}
