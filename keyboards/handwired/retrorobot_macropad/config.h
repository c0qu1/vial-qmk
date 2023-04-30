/*
Copyright 2023 c0qu1

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define VIAL_KEYBOARD_UID {0x10, 0x4F, 0x35, 0xEF, 0x64, 0xC6, 0xDF, 0x00}

#define VIAL_UNLOCK_COMBO_ROWS { 1, 1 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP7 // Specify a optional status led by GPIO number which blinks when entering the bootloader

#define ENCODERS_PAD_A { GP20, GP18 }
#define ENCODERS_PAD_B { GP21, GP19 }

/* Audio */
//#define AUDIO_PIN GP16
//#define AUDIO_PWM_DRIVER PWMD0
//#define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_A
//#define AUDIO_INIT_DELAY
//#define AUDIO_CLICKY
