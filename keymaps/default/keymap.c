/* Copyright 2020 tominabox1
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

/* This abnt2 layout was modified by gustavoarantesdev in 2025 */

#include QMK_KEYBOARD_H
#include <keymap_brazilian_abnt2.h>

enum layers {
    _QWERTY,
    _LOWER,
    _RAISE,
    _ADJUST
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Qwerty
    * ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
    * │  ESC   │   Q    │   W    │   E    │   R    │   T    │   Y    │   U    │   I    │   O    │   P    │  BKSP  │
    * ├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    * │  TAB   │   A    │   S    │   D    │   F    │   G    │   H    │   J    │   K    │   L    │   ;    │ ENTER  │
    * ├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    * │ SHIFT  │   Z    │   X    │   C    │   V    │   B    │   N    │   M    │   ,    │   .    │   /    │ SHIFT  │
    * ├────────┼────────┼────────┼────────┼────────┼────────┴────────┼────────┼────────┼────────┼────────┼────────┤
    * │  CTRL  │CAPSLOCK│  MOD   │  ALT   │ LOWER  │      SPACE      │ RAISE  │  ALT   │  MOD   │ DELETE │  CTRL  │
    * └────────┴────────┴────────┴────────┴────────┴─────────────────┴────────┴────────┴────────┴────────┴────────┘
    */

    [_QWERTY] = LAYOUT_ortho_4x12_1x2uC (
        KC_ESC,  BR_Q,    BR_W,    BR_E,    BR_R,    BR_T,    BR_Y,    BR_U,    BR_I,    BR_O,    BR_P,    KC_BSPC,
        KC_TAB,  BR_A,    BR_S,    BR_D,    BR_F,    BR_G,    BR_H,    BR_J,    BR_K,    BR_L,    BR_SCLN, KC_ENT,
        KC_LSFT, BR_Z,    BR_X,    BR_C,    BR_V,    BR_B,    BR_N,    BR_M,    BR_COMM, BR_DOT,  BR_SLSH, KC_RSFT,
        KC_LCTL, KC_CAPS, KC_LWIN, KC_LALT, TL_LOWR,      KC_SPC,      TL_UPPR, KC_LALT, KC_RWIN, KC_DEL,  KC_RCTL
    ),

    /* Lower
    * ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
    * │        │        │        │        │        │        │   7    │   8    │   9    │   0    │   -    │   =    │
    * ├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    * │        │        │        │        │        │        │  LEFT  │  DOWN  │   UP   │ RIGHT  │   `    │   [    │
    * ├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    * │ SHIFT  │        │        │        │        │        │  HOME  │ PGDOWN │  PGUP  │  END   │   ~    │   ]    │
    * ├────────┼────────┼────────┼────────┼────────┼────────┴────────┼────────┼────────┼────────┼────────┼────────┤
    * │  CTRL  │        │        │        │        │                 │        │  ALT   │  MOD   │        │   Ç    │
    * └────────┴────────┴────────┴────────┴────────┴─────────────────┴────────┴────────┴────────┴────────┴────────┘
    */

    [_LOWER] = LAYOUT_ortho_4x12_1x2uC (
        _______, _______, _______, _______, _______, _______, BR_7,    BR_8,    BR_9,    BR_0,    BR_MINS, BR_EQL,
        _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, BR_ACUT, BR_LBRC,
        KC_LSFT, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  BR_TILD, BR_RBRC,
        KC_LCTL, _______, _______, _______, _______,     _______,      _______, KC_RALT, KC_RWIN, _______, BR_CCED
    ),

    /* Raise
    * ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
    * │   1    │   2    │   3    │   4    │   5    │   6    │        │        │        │        │        │        │
    * ├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    * │   '    │        │ MRIGHT │ MDOWN  │  MUP   │ MLEFT  │        │ BBACK  │BFORWARD│        │        │        │
    * ├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    * │MBUTTON1│   \    │        │ MWDOWN │  MWUP  │        │        │        │        │        │        │ SHIFT  │
    * ├────────┼────────┼────────┼────────┼────────┼────────┴────────┼────────┼────────┼────────┼────────┼────────┤
    * │        │        │  MOD   │  ALT   │MBUTTON2│    MBUTTON3     │        │        │        │        │  CTRL  │
    * └────────┴────────┴────────┴────────┴────────┴─────────────────┴────────┴────────┴────────┴────────┴────────┘
    */

    [_RAISE] = LAYOUT_ortho_4x12_1x2uC (
        BR_1,    BR_2,    BR_3,    BR_4,    BR_5,    BR_6,    _______, _______, _______, _______, _______, _______,
        BR_QUOT, _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______, KC_WBAK, KC_WFWD, _______, _______, _______,
        KC_BTN1, BR_BSLS, _______, KC_WH_D, KC_WH_U, _______, _______, _______, _______, _______, _______, KC_RSFT,
        _______, _______, KC_LWIN, KC_LALT, KC_BTN2,      KC_BTN3,     _______, _______, _______, _______, KC_RCTL
    ),

    /* Adjust (Lower + Raise)
    * ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
    * │   F1   │   F2   │   F3   │   F4   │   F5   │   F6   │   F7   │   F8   │   F9   │  F10   │  F11   │  F12   │
    * ├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    * │        │  RGB   │        │  HUE-  │  HUE+  │  VOL-  │  VOL+  │  SAT+  │  SAT-  │        │ RGBMOD │PRINTSCR│
    * ├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    * │ SHIFT  │ BRGTH+ │        │        │        │  BRT-  │  BRT+  │        │        │        │ BRGTH- │ SHIFT  │
    * ├────────┼────────┼────────┼────────┼────────┼────────┴────────┼────────┼────────┼────────┼────────┼────────┤
    * │  CTRL  │        │        │        │        │      RESET      │        │        │        │        │  CTRL  │
    * └────────┴────────┴────────┴────────┴────────┴─────────────────┴────────┴────────┴────────┴────────┴────────┘
    */

    [_ADJUST] = LAYOUT_ortho_4x12_1x2uC (
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        _______, RM_TOGG, _______, RM_HUED, RM_HUEU, KC_VOLD, KC_VOLU, RM_SATU, RM_SATD, _______, RM_NEXT, KC_PSCR,
        KC_LSFT, _______, _______, _______, _______, KC_BRID, KC_BRIU, _______, _______, _______, _______, KC_RSFT,
        KC_LCTL, _______, _______, _______, _______,      QK_BOOT,     _______, _______, _______, _______, KC_RCTL
    )

};
