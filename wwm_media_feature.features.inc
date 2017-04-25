<?php
/**
 * @file
 * wwm_media_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wwm_media_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function wwm_media_feature_image_default_styles() {
  $styles = array();

  // Exported image style: polaroid-landscape-290x210.
  $styles['polaroid-landscape-290x210'] = array(
    'label' => 'polaroid-landscape-290x210',
    'effects' => array(
      52 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      53 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 290,
          'height' => 210,
        ),
        'weight' => -9,
      ),
      54 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://image_cache_backgrounds/watermark-32x24-knockout.png',
        ),
        'weight' => -8,
      ),
      55 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 331,
            'height' => 291,
            'xpos' => 22,
            'ypos' => 15,
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => -7,
      ),
      56 => array(
        'name' => 'canvasactions_canvas2file',
        'data' => array(
          'xpos' => 0,
          'ypos' => 0,
          'alpha' => 100,
          'path' => 'public://polaroid-template-transparent-landscape.png',
          'dimensions' => 'original',
        ),
        'weight' => -6,
      ),
    ),
  );

  // Exported image style: polaroid-landscape-290x210-rotate-left.
  $styles['polaroid-landscape-290x210-rotate-left'] = array(
    'label' => 'polaroid-landscape-290x210-rotate-left',
    'effects' => array(
      164 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      165 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 290,
          'height' => 210,
        ),
        'weight' => -9,
      ),
      166 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://image_cache_backgrounds/watermark-32x24-knockout.png',
        ),
        'weight' => -8,
      ),
      167 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 331,
            'height' => 291,
            'xpos' => 22,
            'ypos' => 15,
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => -7,
      ),
      168 => array(
        'name' => 'canvasactions_canvas2file',
        'data' => array(
          'xpos' => 0,
          'ypos' => 0,
          'alpha' => 100,
          'path' => 'public://polaroid-template-transparent-landscape.png',
          'dimensions' => 'original',
        ),
        'weight' => -6,
      ),
      169 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => -7,
          'bgcolor' => '',
          'random' => 0,
        ),
        'weight' => 6,
      ),
    ),
  );

  // Exported image style: polaroid-landscape-290x210-rotate-right.
  $styles['polaroid-landscape-290x210-rotate-right'] = array(
    'label' => 'polaroid-landscape-290x210-rotate-right',
    'effects' => array(
      170 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      171 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 290,
          'height' => 210,
        ),
        'weight' => -9,
      ),
      172 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://image_cache_backgrounds/watermark-32x24-knockout.png',
        ),
        'weight' => -8,
      ),
      173 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 331,
            'height' => 291,
            'xpos' => 22,
            'ypos' => 15,
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => -7,
      ),
      174 => array(
        'name' => 'canvasactions_canvas2file',
        'data' => array(
          'xpos' => 0,
          'ypos' => 0,
          'alpha' => 100,
          'path' => 'public://polaroid-template-transparent-landscape.png',
          'dimensions' => 'original',
        ),
        'weight' => -6,
      ),
      175 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => 7,
          'bgcolor' => '',
          'random' => 0,
        ),
        'weight' => 6,
      ),
    ),
  );

  // Exported image style: polaroid-portrait-210x270.
  $styles['polaroid-portrait-210x270'] = array(
    'label' => 'polaroid-portrait-210x270',
    'effects' => array(
      71 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      72 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 210,
          'height' => 270,
        ),
        'weight' => -9,
      ),
      73 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://image_cache_backgrounds/watermark-32x24-knockout.png',
        ),
        'weight' => -7,
      ),
      74 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 248,
            'height' => 351,
            'xpos' => 22,
            'ypos' => 15,
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => -6,
      ),
      75 => array(
        'name' => 'canvasactions_canvas2file',
        'data' => array(
          'xpos' => 0,
          'ypos' => 0,
          'alpha' => 100,
          'path' => 'public://polaroid-template-transparent-portrait.png',
          'dimensions' => 'original',
        ),
        'weight' => -5,
      ),
    ),
  );

  // Exported image style: polaroid-portrait-210x270-rotate-left.
  $styles['polaroid-portrait-210x270-rotate-left'] = array(
    'label' => 'polaroid-portrait-210x270-rotate-left',
    'effects' => array(
      176 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      177 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 210,
          'height' => 270,
        ),
        'weight' => -9,
      ),
      178 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://image_cache_backgrounds/watermark-32x24-knockout.png',
        ),
        'weight' => -8,
      ),
      179 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 248,
            'height' => 351,
            'xpos' => 22,
            'ypos' => 15,
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => -7,
      ),
      180 => array(
        'name' => 'canvasactions_canvas2file',
        'data' => array(
          'xpos' => 0,
          'ypos' => 0,
          'alpha' => 100,
          'path' => 'public://polaroid-template-transparent-portrait.png',
          'dimensions' => 'original',
        ),
        'weight' => -6,
      ),
      181 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => -7,
          'bgcolor' => '',
          'random' => 0,
        ),
        'weight' => 6,
      ),
    ),
  );

  // Exported image style: polaroid-portrait-210x270-rotate-right.
  $styles['polaroid-portrait-210x270-rotate-right'] = array(
    'label' => 'polaroid-portrait-210x270-rotate-right',
    'effects' => array(
      182 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      183 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 210,
          'height' => 270,
        ),
        'weight' => -9,
      ),
      184 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://image_cache_backgrounds/watermark-32x24-knockout.png',
        ),
        'weight' => -8,
      ),
      185 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 248,
            'height' => 351,
            'xpos' => 22,
            'ypos' => 15,
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => -7,
      ),
      186 => array(
        'name' => 'canvasactions_canvas2file',
        'data' => array(
          'xpos' => 0,
          'ypos' => 0,
          'alpha' => 100,
          'path' => 'public://polaroid-template-transparent-portrait.png',
          'dimensions' => 'original',
        ),
        'weight' => -6,
      ),
      187 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => 7,
          'bgcolor' => '',
          'random' => 0,
        ),
        'weight' => 6,
      ),
    ),
  );

  // Exported image style: scale_160x120.
  $styles['scale_160x120'] = array(
    'label' => 'scale_160x120',
    'effects' => array(
      90 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 160,
          'height' => 120,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      91 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://image_cache_backgrounds/watermark-32x24-knockout.png',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: scale_160x120_rotate_left_7.
  $styles['scale_160x120_rotate_left_7'] = array(
    'label' => 'scale_160x120_rotate_left_7',
    'effects' => array(
      188 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      189 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 160,
          'height' => 120,
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
      190 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://image_cache_backgrounds/watermark-32x24-knockout.png',
        ),
        'weight' => -8,
      ),
      191 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => -7,
          'bgcolor' => '',
          'random' => 0,
        ),
        'weight' => -7,
      ),
      192 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 160,
          'height' => 120,
          'upscale' => 1,
        ),
        'weight' => -6,
      ),
    ),
  );

  // Exported image style: scale_160x120_rotate_right_7.
  $styles['scale_160x120_rotate_right_7'] = array(
    'label' => 'scale_160x120_rotate_right_7',
    'effects' => array(
      193 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      194 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 160,
          'height' => 120,
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
      195 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://image_cache_backgrounds/watermark-32x24-knockout.png',
        ),
        'weight' => -8,
      ),
      196 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => 7,
          'bgcolor' => '',
          'random' => 0,
        ),
        'weight' => -7,
      ),
      197 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 160,
          'height' => 120,
          'upscale' => 1,
        ),
        'weight' => -6,
      ),
    ),
  );

  // Exported image style: scale_320x240.
  $styles['scale_320x240'] = array(
    'label' => 'Scale 320 x 240 (4:3)',
    'effects' => array(
      104 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 320,
          'height' => 240,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      105 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://image_cache_backgrounds/watermark-64x48-knockout.png',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: scale_320x240_rotate_left_7.
  $styles['scale_320x240_rotate_left_7'] = array(
    'label' => 'scale_320x240_rotate_left_7',
    'effects' => array(
      198 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      199 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 320,
          'height' => 240,
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
      200 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://image_cache_backgrounds/watermark-64x48-knockout.png',
        ),
        'weight' => -8,
      ),
      201 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => -7,
          'bgcolor' => '',
          'random' => 0,
        ),
        'weight' => -7,
      ),
      202 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 320,
          'height' => 240,
          'upscale' => 1,
        ),
        'weight' => -6,
      ),
    ),
  );

  // Exported image style: scale_320x240_rotate_right_7.
  $styles['scale_320x240_rotate_right_7'] = array(
    'label' => 'scale_320x240_rotate_right_7',
    'effects' => array(
      203 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      204 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 320,
          'height' => 240,
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
      205 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://image_cache_backgrounds/watermark-64x48-knockout.png',
        ),
        'weight' => -8,
      ),
      206 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => 7,
          'bgcolor' => '',
          'random' => 0,
        ),
        'weight' => -7,
      ),
      207 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 320,
          'height' => 240,
          'upscale' => 1,
        ),
        'weight' => -6,
      ),
    ),
  );

  // Exported image style: scale_480x360.
  $styles['scale_480x360'] = array(
    'label' => 'Scale 480 x 360 (4:3)',
    'effects' => array(
      118 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => 360,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      119 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://image_cache_backgrounds/watermark-64x48-knockout.png',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: scale_480x360_rotate_left_7.
  $styles['scale_480x360_rotate_left_7'] = array(
    'label' => 'scale_480x360_rotate_left_7',
    'effects' => array(
      213 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      214 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => 360,
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
      215 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://image_cache_backgrounds/watermark-64x48-knockout.png',
        ),
        'weight' => -8,
      ),
      216 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => -7,
          'bgcolor' => '',
          'random' => 0,
        ),
        'weight' => -7,
      ),
      217 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => 360,
          'upscale' => 1,
        ),
        'weight' => -6,
      ),
    ),
  );

  // Exported image style: scale_480x360_rotate_right_7.
  $styles['scale_480x360_rotate_right_7'] = array(
    'label' => 'scale_480x360_rotate_right_7',
    'effects' => array(
      208 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      209 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => 360,
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
      210 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://image_cache_backgrounds/watermark-64x48-knockout.png',
        ),
        'weight' => -8,
      ),
      211 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => 7,
          'bgcolor' => '',
          'random' => 0,
        ),
        'weight' => -7,
      ),
      212 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => 360,
          'upscale' => 1,
        ),
        'weight' => -6,
      ),
    ),
  );

  // Exported image style: scale_640x480.
  $styles['scale_640x480'] = array(
    'label' => 'Scale 640 x 480 (4:3)',
    'effects' => array(
      132 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 640,
          'height' => 480,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      133 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://image_cache_backgrounds/watermark-64x48-knockout.png',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: scale_640x480_rotate_left_7.
  $styles['scale_640x480_rotate_left_7'] = array(
    'label' => 'scale_640x480_rotate_left_7',
    'effects' => array(
      218 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      219 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 640,
          'height' => 480,
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
      220 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://image_cache_backgrounds/watermark-64x48-knockout.png',
        ),
        'weight' => -8,
      ),
      221 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => -7,
          'bgcolor' => '',
          'random' => 0,
        ),
        'weight' => -7,
      ),
      222 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 640,
          'height' => 480,
          'upscale' => 1,
        ),
        'weight' => -6,
      ),
    ),
  );

  // Exported image style: scale_640x480_rotate_right_7.
  $styles['scale_640x480_rotate_right_7'] = array(
    'label' => 'scale_640x480_rotate_right_7',
    'effects' => array(
      223 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      224 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 640,
          'height' => 480,
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
      225 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://image_cache_backgrounds/watermark-64x48-knockout.png',
        ),
        'weight' => -8,
      ),
      226 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => 7,
          'bgcolor' => '',
          'random' => 0,
        ),
        'weight' => -7,
      ),
      227 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 640,
          'height' => 480,
          'upscale' => 1,
        ),
        'weight' => -6,
      ),
    ),
  );

  return $styles;
}
