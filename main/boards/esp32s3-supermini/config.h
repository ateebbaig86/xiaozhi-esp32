#ifndef _BOARD_CONFIG_H_
#define _BOARD_CONFIG_H_

#include <driver/gpio.h>

#define AUDIO_INPUT_SAMPLE_RATE  16000
#define AUDIO_OUTPUT_SAMPLE_RATE 24000

#define AUDIO_I2S_METHOD_SIMPLEX

#ifdef AUDIO_I2S_METHOD_SIMPLEX

// --- I2S Microphone (INMP441) ---
#define AUDIO_I2S_MIC_GPIO_WS   GPIO_NUM_2
#define AUDIO_I2S_MIC_GPIO_SCK  GPIO_NUM_3
#define AUDIO_I2S_MIC_GPIO_DIN  GPIO_NUM_4

// --- I2S Amplifier (MAX98357A) ---
#define AUDIO_I2S_SPK_GPIO_DOUT GPIO_NUM_5
#define AUDIO_I2S_SPK_GPIO_BCLK GPIO_NUM_6
#define AUDIO_I2S_SPK_GPIO_LRCK GPIO_NUM_7

#endif

// --- Controls & Indicators ---
#define BUILTIN_LED_GPIO        GPIO_NUM_48
#define BOOT_BUTTON_GPIO        GPIO_NUM_0
#define TOUCH_BUTTON_GPIO       GPIO_NUM_1
#define VOLUME_UP_BUTTON_GPIO   GPIO_NUM_10
#define VOLUME_DOWN_BUTTON_GPIO GPIO_NUM_11

// --- I2C OLED Display (SSD1306 128x64) ---
#define DISPLAY_SDA_PIN         GPIO_NUM_8
#define DISPLAY_SCL_PIN         GPIO_NUM_9
#define DISPLAY_WIDTH           128
#define DISPLAY_HEIGHT          64
#define DISPLAY_MIRROR_X        true
#define DISPLAY_MIRROR_Y        true

#define LAMP_GPIO               GPIO_NUM_18

#endif // _BOARD_CONFIG_H_