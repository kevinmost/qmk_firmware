/*
Copyright 2015 Jun Wako <wakojun@gmail.com>

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
#include "whitefox.h"

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Default Layer
     * ,---------------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|Ins|
     * |---------------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|Del|
     * |---------------------------------------------------------------|
     * |CapsLo|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |PgU|
     * |---------------------------------------------------------------|
     * |Shif|   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Up |PgD|
     * |---------------------------------------------------------------|
     * |Ctrl|Gui |Alt |         Space    |Fn0 |Alt |Gui |  |Lef|Dow|Rig|
     * `---------------------------------------------------------------'
     */
    [0] = KEYMAP( \
        KC_GRV, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_BSLS,KC_BSLS, KC_HOME, \
        KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSPC,     KC_PGUP, \
        KC_FN1,  KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,KC_TRNS,KC_ENT,      KC_PGDN,\
        KC_LSFT,KC_TRNS,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT,     KC_UP,  KC_END,\
        KC_LCTL,KC_LGUI,KC_LALT,               KC_FN0,           KC_RALT,KC_RGUI, KC_RCTL,     KC_LEFT,KC_DOWN,KC_RGHT \
    ),
    [1] = KEYMAP( \
        KC_TRNS,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, KC_TRNS,KC_TRNS,KC_TRNS,\
        KC_TRNS,KC_TRNS,  KC_UP,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_PSCR,KC_TRNS,KC_TRNS, KC_DEL,     KC_TRNS,\
        KC_TRNS,KC_LEFT,KC_DOWN,KC_RGHT,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,     KC_TRNS,\
        KC_TRNS,KC_TRNS,KC_MPRV,KC_MPLY,KC_MNXT,KC_TRNS,KC_TRNS,KC_TRNS,KC_MUTE, KC_FN2, KC_FN3,KC_TRNS,KC_TRNS,     KC_TRNS,KC_TRNS,\
        KC_TRNS,KC_TRNS,KC_TRNS,               KC_TRNS,          KC_TRNS,KC_TRNS,KC_TRNS,     KC_TRNS,KC_TRNS,KC_TRNS \
    ),
};

const uint16_t fn_actions[] = {
    // SpaceFn
    [0] = ACTION_LAYER_TAP_KEY(1, KC_SPC),

    // Esc when tapped, Ctrl when held (for Caps Lock replacement)
    [1] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC),

    // Volume keys with Super + Shift held down, so we get
    // fine control in OS X
    [2] = ACTION_MODS_KEY(MOD_LGUI | MOD_LSFT, KC_VOLD),
    [3] = ACTION_MODS_KEY(MOD_LGUI | MOD_LSFT, KC_VOLU),
};
