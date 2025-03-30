/* Copyright 2020 LAZYDESIGNERS
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
 *
 * To flash:
 * nix-shell --run 'qmk flash -kb lazydesigners/bolt -km katanallama'
 */
#include QMK_KEYBOARD_H

#define LT1_SPC LT(1, KC_SPC)
#define LT2_SPC LT(2, KC_SPC)
#define CTRLTAB CTL_T(KC_TAB)
#define SCREC   LGUI(KC_PSCR)
#define SCRECG  LGUI(LCTL(KC_PSCR))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
               QK_GESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                 KC_Y,    KC_U,    KC_I,    KC_O,     KC_P,    KC_BSPC,
               CTRLTAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                 KC_H,    KC_J,    KC_K,    KC_L,     KC_SCLN, KC_ENT,
               SC_LSPO,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,        KC_BSLS, KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH, SC_RSPC,
               KC_LALT,  MO(3),                     KC_LGUI, LT1_SPC,     LT2_SPC, KC_RGUI,                   KC_RALT,  KC_DOWN, KC_RGHT
             ),

    [1] = LAYOUT(
               KC_GRV,   _______, _______, _______, _______, _______,              _______, KC_EQL,  KC_MINS, _______,  _______, KC_DEL,
               G(KC_5),  G(KC_4), G(KC_3), G(KC_2), G(KC_1), G(KC_GRV),            KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,  KC_LBRC, KC_RBRC,
               _______,  _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______,  _______, KC_VOLU,
               _______,  _______,                   _______, KC_TRNS,     KC_TRNS, _______,                   _______,  KC_MUTE, KC_VOLD
             ),

    [2] = LAYOUT(
               QK_GESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                 KC_6,    KC_7,    KC_8,    KC_9,     KC_0,    KC_DEL,
               _______,  _______, _______, SCRECG,  KC_PSCR, SCREC,                _______, _______, _______, KC_LBRC,  KC_QUOT, KC_BSLS,
               _______,  _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______,  _______, _______,
               KC_VOLD,  KC_MUTE,                   KC_VOLU, KC_TRNS,     KC_TRNS, _______,                   _______,  _______, _______
             ),

    [3] = LAYOUT(
               _______,  _______, _______, _______, _______, _______,              KC_7,    KC_8,    KC_9,    _______,  _______, _______,
               _______,  _______, _______, _______, _______, _______,              KC_4,    KC_5,    KC_6,    _______,  _______, _______,
               _______,  _______, _______, _______, _______, _______,     KC_GRV,  KC_1,    KC_2,    KC_3,    _______,  _______, _______,
               _______,  _______,                   _______, _______,     KC_0,                      _______, _______,  _______, QK_BOOT
             ),
};
