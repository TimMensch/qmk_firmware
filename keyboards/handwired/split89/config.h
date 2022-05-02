/* Copyright 2021 jurassic73

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

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xABCD
#define PRODUCT_ID   0x1234
#define DEVICE_VER   0x0001
#define MANUFACTURER realmensch.org
#define PRODUCT      dragon89

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */

/* key matrix size
ROWS = total count of rows for both sides - this is broken out accordingly in split.h
COLS = number of cols per side which currently needs to be equal so there are blank columns for the left side in the split89.h file
 */
#define MATRIX_ROWS 12
#define MATRIX_COLS 10

/* Left side matrix */
#define MATRIX_ROW_PINS { F6, F7, B1, B3, B2, B6 }
#define MATRIX_COL_PINS { F5, F4, B5, B4, E6, D7, C6, D4, D2, D3 }
/* Right side matrix */
#define MATRIX_ROW_PINS_RIGHT { F6, F7, B1, B3, B2, B6 }
#define MATRIX_COL_PINS_RIGHT { F5, F4, B5, B4, E6, D7, C6, D4, D2, D3 }

/* this will be tied to high (VCC with a 2k to 10k resistor) on the left keyboard half and tied to low (GND using a wire jumper only) on the right keyboard half.  This allows a user to plug in a USB cable to either side and function correctly with or without a TRS/TRRS cable with a single hex file. */
#define SPLIT_HAND_PIN D1

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* handedness */
/*
 * Split Keyboard specific options, make sure you have 'SPLIT_KEYBOARD = yes' in your rules.mk, and define SOFT_SERIAL_PIN.
 */
#define SOFT_SERIAL_PIN D0
#define USE_SERIAL

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define SPLIT_LAYER_STATE_ENABLE
#define STRICT_LAYER_RELEASE

#define NO_ACTION_ONESHOT
