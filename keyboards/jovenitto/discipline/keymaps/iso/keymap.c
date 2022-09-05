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

#define L1_CAPS LT(1, KC_CAPS)
#define L2_TAB LT(2, KC_TAB)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_65_iso(
      KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSPC,  KC_GRV,
      L2_TAB , KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC,  KC_RBRC,           KC_DEL,
      MO(1)  , KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT,  KC_NUHS, KC_ENT,   KC_PGUP,
      KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT, KC_UP,    KC_PGDN,
      KC_LCTL, KC_LGUI, KC_LALT,                          KC_SPC,                 KC_RALT, KC_RGUI, KC_RCTL,  KC_LEFT, KC_DOWN,  KC_RIGHT),

  [1] = LAYOUT_65_iso(
      KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,   KC_F10,  KC_F11,   KC_F12,  KC_DEL,   KC_PSCR,
      KC_TRNS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,           XXXXXXX,
      KC_TRNS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX,  KC_HOME,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, KC_PGUP,  KC_END,
      KC_LCTL, KC_LGUI, XXXXXXX,                          XXXXXXX,                XXXXXXX, XXXXXXX, XXXXXXX,  KC_HOME, KC_PGDN,  KC_END ),

  [2] = LAYOUT_65_iso(
      XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,   KC_F10,  KC_F11,   KC_F12,  XXXXXXX,  XXXXXXX,
      KC_TRNS, XXXXXXX, XXXXXXX, XXXXXXX, RESET,  XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX, KC_MPLY, XXXXXXX,  XXXXXXX,           XXXXXXX,
      KC_TRNS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX, KC_MSTP, XXXXXXX,  XXXXXXX, XXXXXXX,  KC_MPRV,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX,QK_BOOT,XXXXXXX,KC_MUTE,XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, KC_VOLU,  KC_MNXT,
      XXXXXXX, XXXXXXX, XXXXXXX,                          XXXXXXX,                XXXXXXX, XXXXXXX, XXXXXXX,  KC_MPRV, KC_VOLD,  KC_MNXT)
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
