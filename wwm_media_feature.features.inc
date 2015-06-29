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
      45 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      46 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 290,
          'height' => 210,
        ),
        'weight' => -9,
      ),
      47 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://watermark-32x24-knockout.png',
        ),
        'weight' => -8,
      ),
      48 => array(
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
      49 => array(
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
      63 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      104 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 290,
          'height' => 210,
        ),
        'weight' => -9,
      ),
      98 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://watermark-32x24-knockout.png',
        ),
        'weight' => -8,
      ),
      73 => array(
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
      75 => array(
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
      77 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => -7,
          'bgcolor' => '',
          'random' => 0,
        ),
        'weight' => -4,
      ),
    ),
  );

  // Exported image style: polaroid-landscape-290x210-rotate-right.
  $styles['polaroid-landscape-290x210-rotate-right'] = array(
    'label' => 'polaroid-landscape-290x210-rotate-right',
    'effects' => array(
      64 => array(
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
          'width' => 290,
          'height' => 210,
        ),
        'weight' => -9,
      ),
      99 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://watermark-32x24-knockout.png',
        ),
        'weight' => -8,
      ),
      74 => array(
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
      76 => array(
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
      78 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => 7,
          'bgcolor' => '',
          'random' => 0,
        ),
        'weight' => -4,
      ),
    ),
  );

  // Exported image style: polaroid-portrait-210x270.
  $styles['polaroid-portrait-210x270'] = array(
    'label' => 'polaroid-portrait-210x270',
    'effects' => array(
      65 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      106 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 210,
          'height' => 270,
        ),
        'weight' => -9,
      ),
      100 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://watermark-32x24-knockout.png',
        ),
        'weight' => -7,
      ),
      80 => array(
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
      81 => array(
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
      66 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      107 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 210,
          'height' => 270,
        ),
        'weight' => -9,
      ),
      101 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://watermark-32x24-knockout.png',
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
          'degrees' => -7,
          'bgcolor' => '',
          'random' => 0,
        ),
        'weight' => -4,
      ),
    ),
  );

  // Exported image style: polaroid-portrait-210x270-rotate-right.
  $styles['polaroid-portrait-210x270-rotate-right'] = array(
    'label' => 'polaroid-portrait-210x270-rotate-right',
    'effects' => array(
      67 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      108 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 210,
          'height' => 270,
        ),
        'weight' => -9,
      ),
      102 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://watermark-32x24-knockout.png',
        ),
        'weight' => -8,
      ),
      84 => array(
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
      87 => array(
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
          'degrees' => 7,
          'bgcolor' => '',
          'random' => 0,
        ),
        'weight' => -4,
      ),
    ),
  );

  // Exported image style: scale_160x120.
  $styles['scale_160x120'] = array(
    'label' => 'scale_160x120',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 160,
          'height' => 120,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      40 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://watermark-32x24-knockout.png',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: scale_160x120_rotate_left_7.
  $styles['scale_160x120_rotate_left_7'] = array(
    'label' => 'scale_160x120_rotate_left_7',
    'effects' => array(
      14 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      42 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 160,
          'height' => 120,
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
      41 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://watermark-32x24-knockout.png',
        ),
        'weight' => -8,
      ),
      13 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => -7,
          'bgcolor' => '',
          'random' => 0,
        ),
        'weight' => -6,
      ),
      12 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 160,
          'height' => 120,
          'upscale' => 1,
        ),
        'weight' => -5,
      ),
    ),
  );

  // Exported image style: scale_160x120_rotate_right_7.
  $styles['scale_160x120_rotate_right_7'] = array(
    'label' => 'scale_160x120_rotate_right_7',
    'effects' => array(
      26 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      28 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 160,
          'height' => 120,
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
      60 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://watermark-32x24-knockout.png',
        ),
        'weight' => -8,
      ),
      27 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => 7,
          'bgcolor' => '',
          'random' => 0,
        ),
        'weight' => -7,
      ),
      61 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 160,
          'height' => 120,
          'upscale' => 1,
        ),
        'weight' => 5,
      ),
    ),
  );

  // Exported image style: scale_320x240.
  $styles['scale_320x240'] = array(
    'label' => 'scale_320x240',
    'effects' => array(
      9 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 320,
          'height' => 240,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      59 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://watermark-64x48-knockout.png',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: scale_320x240_rotate_left_7.
  $styles['scale_320x240_rotate_left_7'] = array(
    'label' => 'scale_320x240_rotate_left_7',
    'effects' => array(
      20 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      22 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 320,
          'height' => 240,
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
      58 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://watermark-64x48-knockout.png',
        ),
        'weight' => -8,
      ),
      21 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => -7,
          'bgcolor' => '',
          'random' => 0,
        ),
        'weight' => -7,
      ),
      57 => array(
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
      29 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      55 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 320,
          'height' => 240,
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
      56 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://watermark-64x48-knockout.png',
        ),
        'weight' => -8,
      ),
      30 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => 7,
          'bgcolor' => '',
          'random' => 0,
        ),
        'weight' => -7,
      ),
      31 => array(
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
      10 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => 360,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      54 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://watermark-64x48-knockout.png',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: scale_480x360_rotate_left_7.
  $styles['scale_480x360_rotate_left_7'] = array(
    'label' => 'scale_480x360_rotate_left_7',
    'effects' => array(
      17 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      19 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => 360,
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
      53 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://watermark-64x48-knockout.png',
        ),
        'weight' => -8,
      ),
      18 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => -7,
          'bgcolor' => '',
          'random' => 0,
        ),
        'weight' => -7,
      ),
      52 => array(
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
      32 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      49 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => 360,
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
      51 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://watermark-64x48-knockout.png',
        ),
        'weight' => -8,
      ),
      33 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => 7,
          'bgcolor' => '',
          'random' => 0,
        ),
        'weight' => -7,
      ),
      50 => array(
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
      11 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 640,
          'height' => 480,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      48 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://watermark-64x48-knockout.png',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: scale_640x480_rotate_left_7.
  $styles['scale_640x480_rotate_left_7'] = array(
    'label' => 'scale_640x480_rotate_left_7',
    'effects' => array(
      23 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      46 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 640,
          'height' => 480,
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
      47 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://watermark-64x48-knockout.png',
        ),
        'weight' => -8,
      ),
      24 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => -7,
          'bgcolor' => '',
          'random' => 0,
        ),
        'weight' => -7,
      ),
      25 => array(
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
      35 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => -10,
      ),
      44 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 640,
          'height' => 480,
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
      45 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right',
          'ypos' => 'bottom',
          'alpha' => 100,
          'path' => 'public://watermark-64x48-knockout.png',
        ),
        'weight' => -8,
      ),
      36 => array(
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => 7,
          'bgcolor' => '',
          'random' => 0,
        ),
        'weight' => -7,
      ),
      37 => array(
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
