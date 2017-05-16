<?php
/**
 * @file
 * wwm_media_feature.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function wwm_media_feature_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'default__media_link__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['default__media_link__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'default__media_link__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['default__media_link__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'default__media_link__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = '';
  $export['default__media_link__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'default__media_link__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['default__media_link__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'default__media_link__file_field_mobile_codes';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['default__media_link__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'default__media_link__file_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['default__media_link__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_gallery_block_thumbnail__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_gallery_block_thumbnail__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_gallery_block_thumbnail__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_gallery_block_thumbnail__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_gallery_block_thumbnail__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_gallery_block_thumbnail__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_gallery_block_thumbnail__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_gallery_block_thumbnail__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_gallery_block_thumbnail__file_field_mobile_codes';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['image__media_gallery_block_thumbnail__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_gallery_block_thumbnail__media_node_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__media_gallery_block_thumbnail__media_node_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_gallery_collection_thumbnail__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_gallery_collection_thumbnail__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_gallery_collection_thumbnail__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_gallery_collection_thumbnail__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_gallery_collection_thumbnail__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_gallery_collection_thumbnail__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_gallery_collection_thumbnail__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_gallery_collection_thumbnail__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_gallery_collection_thumbnail__file_field_mobile_codes';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['image__media_gallery_collection_thumbnail__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_gallery_collection_thumbnail__media_node_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__media_gallery_collection_thumbnail__media_node_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_gallery_lightbox__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_gallery_lightbox__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_gallery_lightbox__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_gallery_lightbox__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_gallery_lightbox__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_gallery_lightbox__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_gallery_lightbox__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_gallery_lightbox__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_gallery_lightbox__file_field_mobile_codes';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['image__media_gallery_lightbox__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_gallery_lightbox__media_flickr_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
    'link_to_flickr' => 0,
  );
  $export['image__media_gallery_lightbox__media_flickr_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_gallery_lightbox__media_node_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__media_gallery_lightbox__media_node_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_gallery_thumbnail__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_gallery_thumbnail__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_gallery_thumbnail__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_gallery_thumbnail__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_gallery_thumbnail__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_gallery_thumbnail__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_gallery_thumbnail__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_gallery_thumbnail__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_gallery_thumbnail__file_field_mobile_codes';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['image__media_gallery_thumbnail__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_gallery_thumbnail__media_flickr_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
    'link_to_flickr' => 0,
  );
  $export['image__media_gallery_thumbnail__media_flickr_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_gallery_thumbnail__media_node_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => 'media_gallery_thumbnail',
  );
  $export['image__media_gallery_thumbnail__media_node_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_large__file_field_file_default';
  $file_display->weight = -49;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_large__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_large__file_field_file_table';
  $file_display->weight = -46;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_large__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_large__file_field_file_url_plain';
  $file_display->weight = -47;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_large__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_large__file_field_media_large_icon';
  $file_display->weight = -48;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_large__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_large__file_field_mobile_codes';
  $file_display->weight = -50;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['image__media_large__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_link__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_link__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_link__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_link__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_link__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = '';
  $export['image__media_link__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_link__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_link__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_link__file_field_mobile_codes';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['image__media_link__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_link__file_field_styles_file_large';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_link__file_field_styles_file_large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_link__file_field_styles_file_media_gallery_large';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_link__file_field_styles_file_media_gallery_large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_link__file_field_styles_file_media_gallery_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_link__file_field_styles_file_media_gallery_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_link__file_field_styles_file_medium';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_link__file_field_styles_file_medium'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_link__file_field_styles_file_original';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_link__file_field_styles_file_original'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_link__file_field_styles_file_square_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_link__file_field_styles_file_square_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_link__file_field_styles_file_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_link__file_field_styles_file_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_link__file_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__media_link__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_link__media_node_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__media_link__media_node_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_original__file_field_file_default';
  $file_display->weight = -49;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_original__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_original__file_field_file_table';
  $file_display->weight = -46;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_original__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_original__file_field_file_url_plain';
  $file_display->weight = -47;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_original__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_original__file_field_media_large_icon';
  $file_display->weight = -48;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_original__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_original__file_field_mobile_codes';
  $file_display->weight = -50;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['image__media_original__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_preview__file_field_file_default';
  $file_display->weight = -49;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_preview__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_preview__file_field_file_table';
  $file_display->weight = -46;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_preview__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_preview__file_field_file_url_plain';
  $file_display->weight = -47;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_preview__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_preview__file_field_media_large_icon';
  $file_display->weight = -48;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_preview__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_preview__file_field_mobile_codes';
  $file_display->weight = -50;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['image__media_preview__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_small__file_field_file_default';
  $file_display->weight = -44;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_small__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_small__file_field_file_table';
  $file_display->weight = -47;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_small__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_small__file_field_file_url_plain';
  $file_display->weight = -46;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_small__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_small__file_field_media_large_icon';
  $file_display->weight = -45;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_small__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_small__file_field_mobile_codes';
  $file_display->weight = -48;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['image__media_small__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_small__file_field_styles_file_media_gallery_large';
  $file_display->weight = -50;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_small__file_field_styles_file_media_gallery_large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_small__file_field_styles_file_media_gallery_thumbnail';
  $file_display->weight = -47;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_small__file_field_styles_file_media_gallery_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_small__file_image';
  $file_display->weight = -50;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'square_thumbnail',
  );
  $export['image__media_small__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_small__media_node_image';
  $file_display->weight = -49;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'square_thumbnail',
  );
  $export['image__media_small__media_node_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_viewer__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_viewer__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_viewer__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_viewer__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_viewer__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_viewer__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_viewer__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_viewer__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_viewer__file_field_mobile_codes';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['image__media_viewer__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_viewer__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__media_viewer__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_viewer__media_flickr_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__media_viewer__media_flickr_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_viewer__media_node_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__media_viewer__media_node_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_landscape__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__polaroid_landscape__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_landscape__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__polaroid_landscape__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_landscape__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__polaroid_landscape__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_landscape__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__polaroid_landscape__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_landscape__file_field_mobile_codes';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['image__polaroid_landscape__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_landscape__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'polaroid-landscape-290x210',
  );
  $export['image__polaroid_landscape__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_landscape__media_node_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__polaroid_landscape__media_node_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_landscape_rotate_left__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__polaroid_landscape_rotate_left__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_landscape_rotate_left__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__polaroid_landscape_rotate_left__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_landscape_rotate_left__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__polaroid_landscape_rotate_left__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_landscape_rotate_left__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__polaroid_landscape_rotate_left__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_landscape_rotate_left__file_field_mobile_codes';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['image__polaroid_landscape_rotate_left__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_landscape_rotate_left__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'polaroid-landscape-290x210-rotate-left',
  );
  $export['image__polaroid_landscape_rotate_left__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_landscape_rotate_left__media_node_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__polaroid_landscape_rotate_left__media_node_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_landscape_rotate_right__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__polaroid_landscape_rotate_right__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_landscape_rotate_right__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__polaroid_landscape_rotate_right__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_landscape_rotate_right__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__polaroid_landscape_rotate_right__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_landscape_rotate_right__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__polaroid_landscape_rotate_right__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_landscape_rotate_right__file_field_mobile_codes';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['image__polaroid_landscape_rotate_right__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_landscape_rotate_right__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'polaroid-landscape-290x210-rotate-right',
  );
  $export['image__polaroid_landscape_rotate_right__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_landscape_rotate_right__media_node_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__polaroid_landscape_rotate_right__media_node_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_portrait__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__polaroid_portrait__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_portrait__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__polaroid_portrait__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_portrait__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__polaroid_portrait__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_portrait__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__polaroid_portrait__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_portrait__file_field_mobile_codes';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['image__polaroid_portrait__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_portrait__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'polaroid-portrait-210x270',
  );
  $export['image__polaroid_portrait__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_portrait__media_node_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__polaroid_portrait__media_node_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_portrait_rotate_left__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__polaroid_portrait_rotate_left__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_portrait_rotate_left__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__polaroid_portrait_rotate_left__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_portrait_rotate_left__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__polaroid_portrait_rotate_left__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_portrait_rotate_left__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__polaroid_portrait_rotate_left__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_portrait_rotate_left__file_field_mobile_codes';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['image__polaroid_portrait_rotate_left__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_portrait_rotate_left__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'polaroid-portrait-210x270-rotate-left',
  );
  $export['image__polaroid_portrait_rotate_left__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_portrait_rotate_left__media_node_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__polaroid_portrait_rotate_left__media_node_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_portrait_rotate_right__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__polaroid_portrait_rotate_right__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_portrait_rotate_right__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__polaroid_portrait_rotate_right__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_portrait_rotate_right__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__polaroid_portrait_rotate_right__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_portrait_rotate_right__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__polaroid_portrait_rotate_right__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_portrait_rotate_right__file_field_mobile_codes';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['image__polaroid_portrait_rotate_right__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_portrait_rotate_right__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'polaroid-portrait-210x270-rotate-right',
  );
  $export['image__polaroid_portrait_rotate_right__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__polaroid_portrait_rotate_right__media_node_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__polaroid_portrait_rotate_right__media_node_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_160x120__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_160x120__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_160x120__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_160x120__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_160x120__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_160x120__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_160x120__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_160x120__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_160x120__file_field_mobile_codes';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['image__scale_160x120__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_160x120__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_160x120',
  );
  $export['image__scale_160x120__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_160x120__media_node_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__scale_160x120__media_node_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_160x120_rotate_left__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_160x120_rotate_left__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_160x120_rotate_left__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_160x120_rotate_left__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_160x120_rotate_left__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_160x120_rotate_left__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_160x120_rotate_left__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_160x120_rotate_left__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_160x120_rotate_left__file_field_mobile_codes';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['image__scale_160x120_rotate_left__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_160x120_rotate_left__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_160x120_rotate_left_7',
  );
  $export['image__scale_160x120_rotate_left__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_160x120_rotate_left__media_node_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__scale_160x120_rotate_left__media_node_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_160x120_rotate_right__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_160x120_rotate_right__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_160x120_rotate_right__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_160x120_rotate_right__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_160x120_rotate_right__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_160x120_rotate_right__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_160x120_rotate_right__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_160x120_rotate_right__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_160x120_rotate_right__file_field_mobile_codes';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['image__scale_160x120_rotate_right__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_160x120_rotate_right__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_160x120_rotate_right_7',
  );
  $export['image__scale_160x120_rotate_right__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_160x120_rotate_right__media_node_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__scale_160x120_rotate_right__media_node_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_320x240__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_320x240__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_320x240__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_320x240__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_320x240__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_320x240__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_320x240__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_320x240__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_320x240__file_field_mobile_codes';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['image__scale_320x240__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_320x240__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_320x240',
  );
  $export['image__scale_320x240__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_320x240__media_node_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__scale_320x240__media_node_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_320x240_rotate_left__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_320x240_rotate_left__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_320x240_rotate_left__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_320x240_rotate_left__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_320x240_rotate_left__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_320x240_rotate_left__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_320x240_rotate_left__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_320x240_rotate_left__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_320x240_rotate_left__file_field_mobile_codes';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['image__scale_320x240_rotate_left__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_320x240_rotate_left__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_320x240_rotate_left_7',
  );
  $export['image__scale_320x240_rotate_left__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_320x240_rotate_left__media_node_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__scale_320x240_rotate_left__media_node_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_320x240_rotate_right__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_320x240_rotate_right__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_320x240_rotate_right__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_320x240_rotate_right__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_320x240_rotate_right__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_320x240_rotate_right__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_320x240_rotate_right__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_320x240_rotate_right__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_320x240_rotate_right__file_field_mobile_codes';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['image__scale_320x240_rotate_right__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_320x240_rotate_right__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_320x240_rotate_right_7',
  );
  $export['image__scale_320x240_rotate_right__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_320x240_rotate_right__media_node_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__scale_320x240_rotate_right__media_node_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_480x360__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_480x360__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_480x360__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_480x360__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_480x360__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_480x360__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_480x360__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_480x360__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_480x360__file_field_mobile_codes';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['image__scale_480x360__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_480x360__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_480x360',
  );
  $export['image__scale_480x360__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_480x360__media_node_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__scale_480x360__media_node_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_480x360_rotate_left__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_480x360_rotate_left__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_480x360_rotate_left__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_480x360_rotate_left__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_480x360_rotate_left__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_480x360_rotate_left__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_480x360_rotate_left__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_480x360_rotate_left__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_480x360_rotate_left__file_field_mobile_codes';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['image__scale_480x360_rotate_left__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_480x360_rotate_left__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_480x360_rotate_left_7',
  );
  $export['image__scale_480x360_rotate_left__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_480x360_rotate_left__media_node_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__scale_480x360_rotate_left__media_node_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_480x360_rotate_right__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_480x360_rotate_right__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_480x360_rotate_right__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_480x360_rotate_right__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_480x360_rotate_right__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_480x360_rotate_right__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_480x360_rotate_right__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_480x360_rotate_right__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_480x360_rotate_right__file_field_mobile_codes';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['image__scale_480x360_rotate_right__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_480x360_rotate_right__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_480x360_rotate_right_7',
  );
  $export['image__scale_480x360_rotate_right__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_480x360_rotate_right__media_node_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__scale_480x360_rotate_right__media_node_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_640x480__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_640x480__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_640x480__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_640x480__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_640x480__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_640x480__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_640x480__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_640x480__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_640x480__file_field_mobile_codes';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['image__scale_640x480__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_640x480__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_640x480',
  );
  $export['image__scale_640x480__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_640x480__media_node_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__scale_640x480__media_node_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_640x480_rotate_left__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_640x480_rotate_left__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_640x480_rotate_left__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_640x480_rotate_left__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_640x480_rotate_left__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_640x480_rotate_left__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_640x480_rotate_left__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_640x480_rotate_left__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_640x480_rotate_left__file_field_mobile_codes';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['image__scale_640x480_rotate_left__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_640x480_rotate_left__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_640x480_rotate_left_7',
  );
  $export['image__scale_640x480_rotate_left__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_640x480_rotate_left__media_node_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__scale_640x480_rotate_left__media_node_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_640x480_rotate_right__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_640x480_rotate_right__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_640x480_rotate_right__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_640x480_rotate_right__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_640x480_rotate_right__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_640x480_rotate_right__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_640x480_rotate_right__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__scale_640x480_rotate_right__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_640x480_rotate_right__file_field_mobile_codes';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['image__scale_640x480_rotate_right__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_640x480_rotate_right__file_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_640x480_rotate_right_7',
  );
  $export['image__scale_640x480_rotate_right__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__scale_640x480_rotate_right__media_node_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__scale_640x480_rotate_right__media_node_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__token__file_field_file_default';
  $file_display->weight = -44;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__token__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__token__file_field_file_table';
  $file_display->weight = -45;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__token__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__token__file_field_file_url_plain';
  $file_display->weight = -50;
  $file_display->status = TRUE;
  $file_display->settings = '';
  $export['image__token__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__token__file_field_media_large_icon';
  $file_display->weight = -46;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__token__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__token__file_field_mobile_codes';
  $file_display->weight = -47;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['image__token__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__token__file_image';
  $file_display->weight = -49;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__token__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__token__media_node_image';
  $file_display->weight = -48;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__token__media_node_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_file_default';
  $file_display->weight = -47;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_file_table';
  $file_display->weight = -50;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_file_url_plain';
  $file_display->weight = -49;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_media_large_icon';
  $file_display->weight = -48;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_mobile_codes';
  $file_display->weight = -40;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['video__default__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_image';
  $file_display->weight = -44;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__default__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__media_bliptv_image';
  $file_display->weight = -33;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_480x360',
  );
  $export['video__default__media_bliptv_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__media_bliptv_video';
  $file_display->weight = -44;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '480',
    'height' => '360',
    'autoplay' => 0,
  );
  $export['video__default__media_bliptv_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__media_vimeo_image';
  $file_display->weight = -34;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'panopoly_image_video',
  );
  $export['video__default__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__media_youtube_image';
  $file_display->weight = -35;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'scale_480x360',
  );
  $export['video__default__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_block_thumbnail__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_block_thumbnail__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_block_thumbnail__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_block_thumbnail__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_block_thumbnail__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_block_thumbnail__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_block_thumbnail__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_block_thumbnail__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_block_thumbnail__file_field_mobile_codes';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['video__media_gallery_block_thumbnail__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_block_thumbnail__file_field_styles_file_large';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_block_thumbnail__file_field_styles_file_large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_block_thumbnail__file_field_styles_file_media_gallery_large';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_block_thumbnail__file_field_styles_file_media_gallery_large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_block_thumbnail__file_field_styles_file_media_gallery_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_block_thumbnail__file_field_styles_file_media_gallery_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_block_thumbnail__file_field_styles_file_medium';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_block_thumbnail__file_field_styles_file_medium'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_block_thumbnail__file_field_styles_file_original';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_block_thumbnail__file_field_styles_file_original'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_block_thumbnail__file_field_styles_file_square_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_block_thumbnail__file_field_styles_file_square_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_block_thumbnail__file_field_styles_file_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_block_thumbnail__file_field_styles_file_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_block_thumbnail__file_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_gallery_block_thumbnail__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_block_thumbnail__media_bliptv_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'media_gallery_thumbnail',
  );
  $export['video__media_gallery_block_thumbnail__media_bliptv_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_block_thumbnail__media_bliptv_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'width' => '560',
    'height' => '340',
    'autoplay' => 0,
  );
  $export['video__media_gallery_block_thumbnail__media_bliptv_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_block_thumbnail__media_vimeo_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'media_gallery_thumbnail',
  );
  $export['video__media_gallery_block_thumbnail__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_block_thumbnail__media_vimeo_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'width' => '560',
    'height' => '340',
    'autoplay' => 0,
  );
  $export['video__media_gallery_block_thumbnail__media_vimeo_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_block_thumbnail__media_youtube_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'width' => '560',
    'height' => '340',
    'autoplay' => 0,
  );
  $export['video__media_gallery_block_thumbnail__media_youtube_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_collection_thumbnail__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_collection_thumbnail__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_collection_thumbnail__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_collection_thumbnail__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_collection_thumbnail__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_collection_thumbnail__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_collection_thumbnail__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_collection_thumbnail__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_collection_thumbnail__file_field_mobile_codes';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['video__media_gallery_collection_thumbnail__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_collection_thumbnail__file_field_styles_file_large';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_collection_thumbnail__file_field_styles_file_large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_collection_thumbnail__file_field_styles_file_media_gallery_large';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_collection_thumbnail__file_field_styles_file_media_gallery_large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_collection_thumbnail__file_field_styles_file_media_gallery_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_collection_thumbnail__file_field_styles_file_media_gallery_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_collection_thumbnail__file_field_styles_file_medium';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_collection_thumbnail__file_field_styles_file_medium'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_collection_thumbnail__file_field_styles_file_original';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_collection_thumbnail__file_field_styles_file_original'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_collection_thumbnail__file_field_styles_file_square_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_collection_thumbnail__file_field_styles_file_square_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_collection_thumbnail__file_field_styles_file_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_collection_thumbnail__file_field_styles_file_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_collection_thumbnail__file_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_gallery_collection_thumbnail__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_collection_thumbnail__media_bliptv_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'media_gallery_thumbnail',
  );
  $export['video__media_gallery_collection_thumbnail__media_bliptv_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_collection_thumbnail__media_bliptv_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'width' => '560',
    'height' => '340',
    'autoplay' => 0,
  );
  $export['video__media_gallery_collection_thumbnail__media_bliptv_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_collection_thumbnail__media_vimeo_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'media_gallery_thumbnail',
  );
  $export['video__media_gallery_collection_thumbnail__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_collection_thumbnail__media_vimeo_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'width' => '560',
    'height' => '340',
    'autoplay' => 0,
  );
  $export['video__media_gallery_collection_thumbnail__media_vimeo_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_collection_thumbnail__media_youtube_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'width' => '560',
    'height' => '340',
    'autoplay' => 0,
  );
  $export['video__media_gallery_collection_thumbnail__media_youtube_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_detail__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_detail__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_detail__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_detail__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_detail__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_detail__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_detail__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_detail__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_detail__file_field_mobile_codes';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['video__media_gallery_detail__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_detail__file_field_styles_file_large';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_detail__file_field_styles_file_large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_detail__file_field_styles_file_media_gallery_large';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_detail__file_field_styles_file_media_gallery_large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_detail__file_field_styles_file_media_gallery_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_detail__file_field_styles_file_media_gallery_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_detail__file_field_styles_file_medium';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_detail__file_field_styles_file_medium'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_detail__file_field_styles_file_original';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_detail__file_field_styles_file_original'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_detail__file_field_styles_file_square_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_detail__file_field_styles_file_square_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_detail__file_field_styles_file_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_detail__file_field_styles_file_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_detail__file_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_gallery_detail__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_detail__media_bliptv_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_gallery_detail__media_bliptv_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_detail__media_bliptv_video';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '560',
    'height' => '340',
    'autoplay' => 0,
  );
  $export['video__media_gallery_detail__media_bliptv_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_detail__media_vimeo_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_gallery_detail__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_detail__media_vimeo_video';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '560',
    'height' => '340',
    'autoplay' => 0,
  );
  $export['video__media_gallery_detail__media_vimeo_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_detail__media_youtube_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_gallery_detail__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_lightbox__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_lightbox__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_lightbox__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_lightbox__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_lightbox__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_lightbox__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_lightbox__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_lightbox__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_lightbox__file_field_mobile_codes';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['video__media_gallery_lightbox__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_lightbox__file_field_styles_file_large';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_lightbox__file_field_styles_file_large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_lightbox__file_field_styles_file_media_gallery_large';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_lightbox__file_field_styles_file_media_gallery_large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_lightbox__file_field_styles_file_media_gallery_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_lightbox__file_field_styles_file_media_gallery_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_lightbox__file_field_styles_file_medium';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_lightbox__file_field_styles_file_medium'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_lightbox__file_field_styles_file_original';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_lightbox__file_field_styles_file_original'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_lightbox__file_field_styles_file_square_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_lightbox__file_field_styles_file_square_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_lightbox__file_field_styles_file_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_lightbox__file_field_styles_file_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_lightbox__file_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_gallery_lightbox__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_lightbox__media_bliptv_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_gallery_lightbox__media_bliptv_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_lightbox__media_bliptv_video';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '560',
    'height' => '340',
    'autoplay' => 0,
  );
  $export['video__media_gallery_lightbox__media_bliptv_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_lightbox__media_vimeo_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_gallery_lightbox__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_lightbox__media_vimeo_video';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '560',
    'height' => '340',
    'autoplay' => 0,
  );
  $export['video__media_gallery_lightbox__media_vimeo_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_lightbox__media_youtube_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_gallery_lightbox__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_thumbnail__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_thumbnail__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_thumbnail__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_thumbnail__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_thumbnail__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_thumbnail__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_thumbnail__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_thumbnail__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_thumbnail__file_field_mobile_codes';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['video__media_gallery_thumbnail__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_thumbnail__file_field_styles_file_large';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_thumbnail__file_field_styles_file_large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_thumbnail__file_field_styles_file_media_gallery_large';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_thumbnail__file_field_styles_file_media_gallery_large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_thumbnail__file_field_styles_file_media_gallery_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_thumbnail__file_field_styles_file_media_gallery_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_thumbnail__file_field_styles_file_medium';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_thumbnail__file_field_styles_file_medium'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_thumbnail__file_field_styles_file_original';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_thumbnail__file_field_styles_file_original'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_thumbnail__file_field_styles_file_square_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_thumbnail__file_field_styles_file_square_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_thumbnail__file_field_styles_file_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_gallery_thumbnail__file_field_styles_file_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_thumbnail__file_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_gallery_thumbnail__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_thumbnail__media_bliptv_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'media_gallery_thumbnail',
  );
  $export['video__media_gallery_thumbnail__media_bliptv_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_thumbnail__media_bliptv_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'width' => '560',
    'height' => '340',
    'autoplay' => 0,
  );
  $export['video__media_gallery_thumbnail__media_bliptv_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_thumbnail__media_vimeo_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'media_gallery_thumbnail',
  );
  $export['video__media_gallery_thumbnail__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_thumbnail__media_vimeo_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'width' => '560',
    'height' => '340',
    'autoplay' => 0,
  );
  $export['video__media_gallery_thumbnail__media_vimeo_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_gallery_thumbnail__media_youtube_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'width' => '560',
    'height' => '340',
    'autoplay' => 0,
  );
  $export['video__media_gallery_thumbnail__media_youtube_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_file_default';
  $file_display->weight = -50;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_file_table';
  $file_display->weight = -40;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_file_url_plain';
  $file_display->weight = -43;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_media_large_icon';
  $file_display->weight = -41;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_mobile_codes';
  $file_display->weight = -39;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['video__media_large__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_styles_file_large';
  $file_display->weight = -45;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_styles_file_large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_styles_file_media_gallery_large';
  $file_display->weight = -47;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_styles_file_media_gallery_large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_styles_file_media_gallery_thumbnail';
  $file_display->weight = -48;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_styles_file_media_gallery_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_styles_file_medium';
  $file_display->weight = -49;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_styles_file_medium'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_styles_file_original';
  $file_display->weight = -44;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_styles_file_original'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_styles_file_square_thumbnail';
  $file_display->weight = -38;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_styles_file_square_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_styles_file_thumbnail';
  $file_display->weight = -42;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_styles_file_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_image';
  $file_display->weight = -46;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_large__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__media_vimeo_image';
  $file_display->weight = -32;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'large',
  );
  $export['video__media_large__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__media_youtube_image';
  $file_display->weight = -34;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'large',
  );
  $export['video__media_large__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_link__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_link__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_link__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = '';
  $export['video__media_link__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_link__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_link__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_link__file_field_mobile_codes';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['video__media_link__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_link__file_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_link__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_link__media_bliptv_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_link__media_bliptv_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_link__media_bliptv_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'width' => '560',
    'height' => '340',
    'autoplay' => 0,
  );
  $export['video__media_link__media_bliptv_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_link__media_flickr_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_link__media_flickr_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_link__media_flickr_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'width' => '560',
    'height' => '340',
    'autoplay' => 0,
  );
  $export['video__media_link__media_flickr_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_link__media_vimeo_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_link__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_link__media_vimeo_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'width' => '560',
    'height' => '340',
    'autoplay' => 0,
  );
  $export['video__media_link__media_vimeo_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_link__media_youtube_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_link__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_link__media_youtube_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'theme' => 'dark',
    'width' => '560',
    'height' => '340',
    'autoplay' => 0,
    'related' => 1,
    'modestbranding' => 0,
    'showinfo' => 1,
  );
  $export['video__media_link__media_youtube_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__file_field_file_default';
  $file_display->weight = -50;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_original__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__file_field_file_table';
  $file_display->weight = -40;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_original__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__file_field_file_url_plain';
  $file_display->weight = -43;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_original__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__file_field_media_large_icon';
  $file_display->weight = -41;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_original__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__file_field_mobile_codes';
  $file_display->weight = -39;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['video__media_original__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__file_field_styles_file_large';
  $file_display->weight = -45;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_original__file_field_styles_file_large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__file_field_styles_file_media_gallery_large';
  $file_display->weight = -47;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_original__file_field_styles_file_media_gallery_large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__file_field_styles_file_media_gallery_thumbnail';
  $file_display->weight = -48;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_original__file_field_styles_file_media_gallery_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__file_field_styles_file_medium';
  $file_display->weight = -49;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_original__file_field_styles_file_medium'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__file_field_styles_file_original';
  $file_display->weight = -44;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_original__file_field_styles_file_original'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__file_field_styles_file_square_thumbnail';
  $file_display->weight = -38;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_original__file_field_styles_file_square_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__file_field_styles_file_thumbnail';
  $file_display->weight = -42;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_original__file_field_styles_file_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__file_image';
  $file_display->weight = -46;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_original__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_small__file_field_file_default';
  $file_display->weight = -32;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_small__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_small__file_field_file_table';
  $file_display->weight = -38;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_small__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_small__file_field_file_url_plain';
  $file_display->weight = -39;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_small__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_small__file_field_media_large_icon';
  $file_display->weight = -40;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_small__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_small__file_field_mobile_codes';
  $file_display->weight = -37;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['video__media_small__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_small__file_field_styles_file_large';
  $file_display->weight = -34;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_small__file_field_styles_file_large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_small__file_field_styles_file_media_gallery_large';
  $file_display->weight = -47;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_small__file_field_styles_file_media_gallery_large'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_small__file_field_styles_file_media_gallery_thumbnail';
  $file_display->weight = -42;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_small__file_field_styles_file_media_gallery_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_small__file_field_styles_file_medium';
  $file_display->weight = -35;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_small__file_field_styles_file_medium'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_small__file_field_styles_file_original';
  $file_display->weight = -41;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_small__file_field_styles_file_original'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_small__file_field_styles_file_square_thumbnail';
  $file_display->weight = -36;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_small__file_field_styles_file_square_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_small__file_field_styles_file_thumbnail';
  $file_display->weight = -33;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_small__file_field_styles_file_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_small__file_image';
  $file_display->weight = -48;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_small__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_small__media_bliptv_image';
  $file_display->weight = -44;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'medium',
  );
  $export['video__media_small__media_bliptv_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_small__media_bliptv_video';
  $file_display->weight = -49;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '320',
    'height' => '240',
    'autoplay' => 0,
  );
  $export['video__media_small__media_bliptv_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_small__media_vimeo_image';
  $file_display->weight = -43;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'medium',
  );
  $export['video__media_small__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_small__media_youtube_image';
  $file_display->weight = -45;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'medium',
  );
  $export['video__media_small__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_viewer__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_viewer__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_viewer__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_viewer__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_viewer__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_viewer__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_viewer__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_viewer__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_viewer__file_field_mobile_codes';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'mobile_codes_preset' => 'block_node_url',
  );
  $export['video__media_viewer__file_field_mobile_codes'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_viewer__file_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_viewer__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_viewer__media_bliptv_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_viewer__media_bliptv_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_viewer__media_bliptv_video';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '560',
    'height' => '340',
    'autoplay' => 0,
  );
  $export['video__media_viewer__media_bliptv_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_viewer__media_vimeo_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_viewer__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_viewer__media_vimeo_video';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '560',
    'height' => '340',
    'autoplay' => 0,
  );
  $export['video__media_viewer__media_vimeo_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_viewer__media_youtube_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_viewer__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_viewer__media_youtube_video';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '560',
    'height' => '340',
    'autoplay' => 0,
  );
  $export['video__media_viewer__media_youtube_video'] = $file_display;

  return $export;
}
