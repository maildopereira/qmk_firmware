/* Copyright 2019 COSEYFANNITUTTI
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
#include QMK_KEYBOARD_H

#include <stdio.h>

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_tkl_iso(
      KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,             KC_PSCR,  KC_SLCK, DF(1)  ,
      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSPC,  KC_DEL,   KC_INS,   KC_HOME, KC_PGUP,
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,  KC_RBRC,                     KC_DEL,   KC_END,  KC_PGDN,
      KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,  KC_NUHS, KC_ENT,
      KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT, MO(1),                        KC_UP,
      KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                    KC_RALT, KC_RGUI, MO(1),    KC_RCTL,                     KC_LEFT,  KC_DOWN, KC_RIGHT),

  [1] = LAYOUT_tkl_iso(
      DF(0)  ,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX,            XXXXXXX,  XXXXXXX, DF(2)  ,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_MPLY, KC_MNXT,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,                     XXXXXXX,  KC_MSTP, KC_MPRV,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX,                      KC_VOLU,
      XXXXXXX, XXXXXXX, XXXXXXX,                            KC_MPLY,                   XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,                     KC_MPRV,  KC_VOLD, KC_MNXT),

  [2] = LAYOUT_tkl_iso(
      DF(0)  ,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX,            XXXXXXX,  XXXXXXX, DF(3)  ,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_0, KC_NUM ,  XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_KP_4, KC_KP_5, KC_KP_6, XXXXXXX, XXXXXXX,  XXXXXXX,                     XXXXXXX,  XXXXXXX, XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_KP_1, KC_KP_2, KC_KP_3, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_KP_0, KC_KP_0, KC_COMM, KC_PDOT, KC_SLSH,  XXXXXXX, XXXXXXX,                      XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,                     XXXXXXX,  XXXXXXX, XXXXXXX),
  
  [3] = LAYOUT_tkl_iso(
      DF(0)  ,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX,            XXXXXXX,  XXXXXXX, DF(0)  ,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,                     XXXXXXX,  XXXXXXX, XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX,                      XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,                     XXXXXXX,  XXXXXXX, XXXXXXX)
};


bool encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) {
    if (get_mods() & MOD_BIT(KC_LCTL)) {          //LCTL + rotate = change desktop
      if (clockwise) {
        tap_code16(C(G(KC_RIGHT)));
      } else {
        tap_code16(C(G(KC_LEFT)));
      }
    } else if (get_mods() & MOD_BIT(KC_LGUI)) {   // WIN + rotate = snap window to edges
      if (clockwise) {
        tap_code16(G(KC_RIGHT));
      } else {
        tap_code16(G(KC_LEFT));
      }
    } else {                                      // rotate = volume
      if (clockwise) {
        tap_code_delay(KC_VOLU, 10);
      } else {
        tap_code_delay(KC_VOLD, 10);
      }
    }
  }
  return false;
}



#ifdef OLED_ENABLE

// START GRAPHICS

#define TAP_FRAMES 2 // total number of tapping animation frames
#define READY_SPEED 10 // above this speed, switch from waiting to ready
#define TAP_SPEED 80 // above this speed, switch from ready to animation (if based on WPM; useless if record->event.pressed is used to advance the animation)

#define ANIM_FRAME_DURATION 100 // how long each animation frame lasts in ms
#define ANIM_SIZE 512 // number of pixels in 128x32 display

// Two animation frames, alternating tapping
static const char PROGMEM animation_frames[TAP_FRAMES][ANIM_SIZE] = {
    { 
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,254,  1,  1,  1,225, 17,225, 17,225, 17,225, 17,225, 17,  1,  1,253,171, 85, 43, 21,139, 69,163, 85, 43, 21,139, 69,163, 85, 43, 21,139, 69,163, 85, 43, 21,139, 69,163, 85, 43, 21,171, 85,171,  1,  1, 17,225, 17,225, 17,225, 17,225, 17,225,  1,  1,  1,254,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,255,  0,  0,  0,255,  0,255,  0,255,  0,255,  0,255,  0,  0,  0,255,170, 85,138, 69,162, 81, 40,148, 74,197, 50,  9,  8, 68,228,229,212, 57,  8, 48,194, 77,162, 81, 40, 20,138, 69,170, 85,170,  0,  0,  0,255,  0,255,  0,255,  0,255,  0,255,  0,  0,  0,255,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,255,  0,  0,  0,255,  0,255,  0,255,  0,255,  0,255,  0,  0,  0,255,170, 85,162, 81, 40, 20,136, 67,172, 83, 46, 88, 90,177,176,177,176, 88, 88, 46,147, 76, 35, 16,138, 69,162, 81,170, 85,170,  0,  0,  0,255,  0,255,  0,255,  0,255,  0,255,  0,  0,  0,255,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,128,128,128,135,136,135,136,135,136,135,136,135,136,128,128,255,170,213,168,212,170,197,162,209,168,212,170,197,162,208,168,212,170,197,162,209,168,212,170,197,162,209,168,212,170,213,170,128,128,136,135,136,135,136,135,136,135,136,135,128,128,128,127,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,	    
    },
    {
0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,254,  1,  1,  1,225, 17,225, 17,225, 17,225, 17,225, 17,  1,  1,253,171, 85, 43, 21,139, 69,163, 85, 43, 21,139, 69, 35,149,171,149,139, 69, 35, 85, 43, 21,139, 69,163, 85, 43, 21,171, 85,171,  1,  1, 17,225, 17,225, 17,225, 17,225, 17,225,  1,  1,  1,254,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,255,  0,  0,  0,255,  0,255,  0,255,  0,255,  0,255,  0,  0,  0,255,170, 85,138, 69,162, 81, 40,148, 66,249,198,  1, 65, 40, 28, 60, 26,  7,  1,198,252, 65,162, 81, 40, 20,138, 69,170, 85,170,  0,  0,  0,255,  0,255,  0,255,  0,255,  0,255,  0,  0,  0,255,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,255,  0,  0,  0,255,  0,255,  0,255,  0,255,  0,255,  0,  0,  0,255,170, 85,162, 81, 40, 20,136, 67,172, 83, 47, 95, 95,190,190,190,190, 95, 95, 47,147, 76, 35, 16,138, 69,162, 81,170, 85,170,  0,  0,  0,255,  0,255,  0,255,  0,255,  0,255,  0,  0,  0,255,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,128,128,128,135,136,135,136,135,136,135,136,135,136,128,128,255,170,213,168,212,170,197,162,209,168,212,170,197,162,208,168,212,170,197,162,209,168,212,170,197,162,209,168,212,170,213,170,128,128,136,135,136,135,136,135,136,135,136,135,128,128,128,127,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,	    
    }
};

// Ready frame
static const char PROGMEM ready_frame[ANIM_SIZE] = {
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,254,  1,  1,  1,225, 17,225, 17,225, 17,225, 17,225, 17,  1,  1,253,171, 85, 43, 21,139, 69,163, 85, 43, 21,139, 69, 35,149,171,149,139, 69, 35, 85, 43, 21,139, 69,163, 85, 43, 21,171, 85,171,  1,  1, 17,225, 17,225, 17,225, 17,225, 17,225,  1,  1,  1,254,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,255,  0,  0,  0,255,  0,255,  0,255,  0,255,  0,255,  0,  0,  0,255,170, 85,138, 69,162, 81, 40,148, 66,249,198,  1, 65, 40, 28, 60, 26,  7,  1,198,252, 65,162, 81, 40, 20,138, 69,170, 85,170,  0,  0,  0,255,  0,255,  0,255,  0,255,  0,255,  0,  0,  0,255,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,255,  0,  0,  0,255,  0,255,  0,255,  0,255,  0,255,  0,  0,  0,255,170, 85,162, 81, 40, 20,136, 67,172, 83, 47, 95, 95,190,190,190,190, 95, 95, 47,147, 76, 35, 16,138, 69,162, 81,170, 85,170,  0,  0,  0,255,  0,255,  0,255,  0,255,  0,255,  0,  0,  0,255,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,128,128,128,135,136,135,136,135,136,135,136,135,136,128,128,255,170,213,168,212,170,197,162,209,168,212,170,197,162,208,168,212,170,197,162,209,168,212,170,197,162,209,168,212,170,213,170,128,128,136,135,136,135,136,135,136,135,136,135,128,128,128,127,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
};
  
// Sleep/waiting/idle frame
static const char PROGMEM waiting_frame[] = {
         192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,  0,  0,192,192,192,192,192,192,  0,  0,  0,  0,128,128,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,  0,  0,  0,  0,  0,128,128,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,128,  0, 64,128, 64,128, 64,128, 64,128,  0,  0,  0,128,  0,128, 64,160, 64,160, 80,168, 84, 40,148, 74,197, 66,192, 64,192, 64,192, 64,192, 64,192, 64,192, 64,192,
        64,255,255,255,255,255,255, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15,  0,  0,255,255,255,255,255,255,  0,  0,252,255,255,255,255,255, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15,  7,  0,  0,  0,252,255,255,255,255,255, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 63, 63, 63, 63, 62, 60,  1,  2, 21, 42, 85,170, 85,170, 85,170, 85, 42, 21, 10,  5,  2,  9,  4, 14,  5, 15,  5,255, 85,255, 85,255, 85, 15,  5, 15,  5, 15,  5, 15,  5, 15, 
        5,255,255,255,255,255,255, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63,  0,  0,  0,  0,  0,  0,255,255,255,255,255,255,  0,  0,255,255,255,255,255,255,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3, 15, 31, 31, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63,255,255,254,254,252,240,  0,  0,  0,  0,170,252,169,250,169,252,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,255, 85,255, 85,255, 85,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
        0,  7, 15, 31, 63,127,255,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  7, 15, 31, 63,127,255,  0,  0, 15, 63,127,127,255,255,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,  0,  0,  0, 15, 63,127,127,255,255,252,252,252,252,252,252,252,252,252,252,252,252,252,252,255,255,127,127, 63, 15,  0,  0,  0,  0,170,127, 42, 31, 10,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,255, 85, 63, 21, 15,  5,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
        0, 
};

// music symbol for music layer
static const char PROGMEM music_layer_on[] = {
  0x0E, 0x0E, 0x0E, 0x00,
};

// END GRAPHICS  

uint32_t anim_timer = 0;
uint8_t curr_anim_frame = 0;

// tests if waiting or ready, based on WPM
void render_animation(void) {
  if (timer_elapsed32(anim_timer) > ANIM_FRAME_DURATION) {
    anim_timer = timer_read32();
    if (get_current_wpm() > READY_SPEED) {
      oled_write_raw_P(ready_frame, ANIM_SIZE);
    } else {
      oled_write_raw_P(waiting_frame, ANIM_SIZE); 
    }
  }
}

// detects if a key has been pressed and display animation frames
bool process_record_user(uint16_t keycode, keyrecord_t * record) {
  if (record->event.pressed) {
    if (get_current_wpm() > 10) {
       	curr_anim_frame = (curr_anim_frame + 1) % TAP_FRAMES;
       	oled_write_raw_P(animation_frames[abs((TAP_FRAMES - 1) - curr_anim_frame)], ANIM_SIZE);
    }
  }
  return true;
}


bool oled_task_user(void) {

  // render animation first, status next
  render_animation(); // for ready and waiting states (writing state is controlled by process_record_user)

  // Host Keyboard Layer Status
  oled_set_cursor(0,3);
  switch (get_highest_layer(layer_state | default_layer_state)) {
        case 0:
//            oled_write_P(PSTR("   "), false);
            break;
        case 1:
            oled_write_P(music_layer_on, false);
            break;
        case 2:
            oled_write_P(PSTR("123"), false);
            break;
        case 3: 
            oled_write_P(PSTR("RST"), false);
            break;
        default:
            oled_write_P(PSTR("Und"), false);
  }

  // Host Keyboard LED Status
  led_t led_state = host_keyboard_led_state();
  oled_set_cursor(0,0);
  oled_write_P(led_state.caps_lock ? PSTR("CAPS") : PSTR(""), false);

  //WPM
  char wpm_str[10];                         //string to store converted wpm_now value
  int wpm_now = get_current_wpm();          //get current wpm
  if (wpm_now > 10) {
    oled_set_cursor(18,2);
    oled_write_P(PSTR("WPM"), false);
    oled_set_cursor(18,3);
    sprintf(wpm_str, "%03d", wpm_now);      // edit the string to change wwhat shows up, edit %03d to change how many digits show up
    oled_write(wpm_str, false);             // writes wpm_str
  }
  return false;
}
#endif


