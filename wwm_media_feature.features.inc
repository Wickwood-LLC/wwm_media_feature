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
      57 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      58 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 290,
          'height' => 210,
        ),
        'weight' => -9,
      ),
      59 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://image_cache_backgrounds/watermark-32x24-knockout.png',
        ),
        'weight' => -8,
      ),
      60 => array(
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
      61 => array(
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
      69 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => -7,
          'bgcolor' => '#FFFFFF',
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
      63 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      64 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 290,
          'height' => 210,
        ),
        'weight' => -9,
      ),
      65 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://image_cache_backgrounds/watermark-32x24-knockout.png',
        ),
        'weight' => -8,
      ),
      66 => array(
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
      67 => array(
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
      70 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => 7,
          'bgcolor' => '#FFFFFF',
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
      76 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      77 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 210,
          'height' => 270,
        ),
        'weight' => -9,
      ),
      78 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://image_cache_backgrounds/watermark-32x24-knockout.png',
        ),
        'weight' => -8,
      ),
      79 => array(
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
      80 => array(
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
      88 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => -7,
          'bgcolor' => '#FFFFFF',
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
      82 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      83 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 210,
          'height' => 270,
        ),
        'weight' => -9,
      ),
      84 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://image_cache_backgrounds/watermark-32x24-knockout.png',
        ),
        'weight' => -8,
      ),
      85 => array(
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
      86 => array(
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
      89 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => 7,
          'bgcolor' => '#FFFFFF',
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
      92 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      93 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 160,
          'height' => 120,
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
      94 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://image_cache_backgrounds/watermark-32x24-knockout.png',
        ),
        'weight' => -8,
      ),
      102 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => -7,
          'bgcolor' => '#FFFFFF',
          'random' => 0,
        ),
        'weight' => -7,
      ),
      96 => array(
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
      97 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      98 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 160,
          'height' => 120,
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
      99 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://image_cache_backgrounds/watermark-32x24-knockout.png',
        ),
        'weight' => -8,
      ),
      103 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => 7,
          'bgcolor' => '#FFFFFF',
          'random' => 0,
        ),
        'weight' => -7,
      ),
      101 => array(
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
    'label' => 'scale_320x240',
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
      106 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      107 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 320,
          'height' => 240,
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
      108 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://image_cache_backgrounds/watermark-64x48-knockout.png',
        ),
        'weight' => -8,
      ),
      116 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => -7,
          'bgcolor' => '#FFFFFF',
          'random' => 0,
        ),
        'weight' => -7,
      ),
      110 => array(
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
      111 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      112 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 320,
          'height' => 240,
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
      113 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://image_cache_backgrounds/watermark-64x48-knockout.png',
        ),
        'weight' => -8,
      ),
      117 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => 7,
          'bgcolor' => '#FFFFFF',
          'random' => 0,
        ),
        'weight' => -7,
      ),
      115 => array(
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
    'label' => 'scale_480x360',
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
      125 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      126 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => 360,
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
      127 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://image_cache_backgrounds/watermark-64x48-knockout.png',
        ),
        'weight' => -8,
      ),
      130 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => -7,
          'bgcolor' => '#FFFFFF',
          'random' => 0,
        ),
        'weight' => -7,
      ),
      129 => array(
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
      120 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      121 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => 360,
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
      122 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://image_cache_backgrounds/watermark-64x48-knockout.png',
        ),
        'weight' => -8,
      ),
      131 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => 7,
          'bgcolor' => '#FFFFFF',
          'random' => 0,
        ),
        'weight' => -7,
      ),
      124 => array(
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
    'label' => 'scale_640x480',
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
      139 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      140 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 640,
          'height' => 480,
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
      141 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://image_cache_backgrounds/watermark-64x48-knockout.png',
        ),
        'weight' => -8,
      ),
      144 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => -7,
          'bgcolor' => '#FFFFFF',
          'random' => 0,
        ),
        'weight' => -7,
      ),
      143 => array(
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
      134 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      135 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 640,
          'height' => 480,
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
      136 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://image_cache_backgrounds/watermark-64x48-knockout.png',
        ),
        'weight' => -8,
      ),
      145 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => 7,
          'bgcolor' => '#FFFFFF',
          'random' => 0,
        ),
        'weight' => -7,
      ),
      138 => array(
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
