/*
 * Flash:
 * nix-shell --run 'qmk flash -kb projectkb/alice -km katanallama'
 */
#include QMK_KEYBOARD_H

#define LT1_SPC LT(1, KC_SPC)
#define LT2_SPC LT(2, KC_SPC)
#define CTRLTAB CTL_T(KC_TAB)
#define SCREC   LGUI(KC_PSCR)
#define SCRECG  LGUI(LCTL(KC_PSCR))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_alice_split_bs(
    KC_ESC,  QK_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  QK_GESC, KC_DEL,
    KC_PGUP, KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,             KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
    KC_PGDN, CTRLTAB, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,             KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
             SC_LSPO, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,             KC_BSLS,KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, SC_RSPC, KC_RGUI,
             KC_LALT,          KC_LGUI, LT1_SPC, MO(1),                             LT2_SPC,          KC_LGUI,          KC_RALT
  ),

  [1] = LAYOUT_alice_split_bs(
    RGB_TOG,  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,  KC_DEL,
    RGB_MOD,  _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______,
    RGB_RMOD, G(KC_5),  G(KC_4), G(KC_3), G(KC_2), G(KC_1), G(KC_GRV),       KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,_______, _______,          _______,
              _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______,
              _______,          _______, _______, _______,                            _______,          _______,          _______
  ),

  [2] = LAYOUT_alice_split_bs(
    _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______,  _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______,
    _______,  _______, _______, KC_DOWN, SCRECG,  KC_PSCR, SCREC,            _______, KC_EQL,  KC_MINS, KC_LBRC, _______, _______,          _______,
              _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______,
              _______,          _______, _______, _______,                            _______,          _______,          _______
  ),

  [3] = LAYOUT_alice_split_bs(
    QK_BOOT,  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,  KC_DEL,
    _______,  _______, _______, _______, _______, _______, _______,          KC_PSLS, KC_P7,   KC_P8,   KC_P9,   KC_PMNS, _______, _______, _______,
    _______,  _______, _______, _______, _______, _______, _______,          KC_PAST, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, _______,          _______,
              _______, _______, _______, _______, _______, _______,          SC_LSPO, KC_P1,   KC_P2,   KC_P3,   SC_RSPC, _______, _______, _______,
              _______,          _______, _______, _______,                            _______,          _______,          _______
  ),
};
