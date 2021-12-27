/* Copyright 2015-2021 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#ifdef AUDIO_ENABLE
#    define STARTUP_SONG SONG(PREONIC_SOUND)
// #define STARTUP_SONG SONG(NO_SOUND)

#    define DEFAULT_LAYER_SONGS \
        { SONG(QWERTY_SOUND), SONG(COLEMAK_SOUND), SONG(DVORAK_SOUND) }
#endif

#define MUSIC_MASK (keycode != KC_NO)

/*
 * MIDI options
 */

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2
//

//enable mouse
#define MK_KINETIC_SPEED	//Enable kinetic mode
#define MOUSEKEY_DELAY 8	//Delay between pressing a movement key and cursor movement
#define MOUSEKEY_INTERVAL 16	//Time between cursor movements in milliseconds
#define MOUSEKEY_MOVE_DELTA	4	//Step size for accelerating from initial to base speed
#define MOUSEKEY_INITIAL_SPEED 40	//Initial speed of the cursor in pixel per second
#define MOUSEKEY_BASE_SPEED	100	//Maximum cursor speed at which acceleration stops
#define MOUSEKEY_DECELERATED_SPEED 20	//Decelerated cursor speed
#define MOUSEKEY_ACCELERATED_SPEED 200	//Accelerated cursor speed
#define MOUSEKEY_WHEEL_INITIAL_MOVEMENTS 16	//Initial number of movements of the mouse wheel
#define MOUSEKEY_WHEEL_BASE_MOVEMENTS 32	//Maximum number of movements at which acceleration stops
#define MOUSEKEY_WHEEL_ACCELERATED_MOVEMENTS 48	//Accelerated wheel movements
#define MOUSEKEY_WHEEL_DECELERATED_MOVEMENTS 8	//Decelerated wheel movements
#define MOUSEKEY_WHEEL_DELAY 0
