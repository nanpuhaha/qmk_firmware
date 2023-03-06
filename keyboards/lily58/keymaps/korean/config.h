/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* Select hand configuration */

// #define MASTER_LEFT
// #define MASTER_RIGHT
#define EE_HANDS
// https://docs.qmk.fm/#/feature_split_keyboard?id=handedness-by-eeprom

#define SPLIT_USB_DETECT
/* Enabling this option changes the startup behavior to listen
for an active USB communication to delegate which part is master
and which is slave. With this option enabled and theres’s USB
communication, then that half assumes it is the master, otherwise
it assumes it is the slave.

Without this option, the master is the half that can detect voltage
on the physical USB connection (VBUS detection).

https://docs.qmk.fm/#/feature_split_keyboard?id=hardware-configuration-options
*/

/* Master/slave delegation is made either by detecting voltage on
VBUS connection or waiting for USB communication (SPLIT_USB_DETECT).
Pro Micro boards can use VBUS detection out of the box and be used
with or without SPLIT_USB_DETECT.

Many ARM boards, but not all, do not support VBUS detection.
Because it is common that ARM boards lack VBUS detection,
SPLIT_USB_DETECT is automatically defined on ARM targets
(technically when ChibiOS is targetted).

https://docs.qmk.fm/#/feature_split_keyboard?id=hardware-considerations-and-mods
*/

#define QUICK_TAP_TERM 0
#define TAPPING_TERM 100

#undef RGBLED_NUM
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_TWINKLE
#define RGBLED_NUM 27
#define RGBLIGHT_LIMIT_VAL 120
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17

// Underglow
/*
#undef RGBLED_NUM
#define RGBLED_NUM 14    // Number of LEDs
#define RGBLIGHT_SLEEP
*/
