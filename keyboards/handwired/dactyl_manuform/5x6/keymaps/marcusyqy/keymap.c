/* A standard layout for the Dactyl Manuform 5x6 Keyboard */

#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _DVORAK 1
#define _FN 2

#define FN MO(_FN)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_5x6(
     KC_EQL, KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_MINS,
     KC_TAB, KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_BSLASH,
     KC_ESC, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  , LT(_FN, KC_SCLN),KC_QUOT,
     KC_LSFT, LCTL_T(KC_Z)  , KC_X  , KC_C , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,LCTL_T(KC_SLSH), KC_RSFT,
                      KC_GRV, FN,                                                       KC_LBRC,KC_RBRC,
                                      KC_BSPC, KC_DEL,                       KC_ENT, KC_SPC,
                                      KC_LALT, KC_LCTL,                      FN,  RALT_T(KC_PSCR),
                                      FN, KC_LGUI,                         KC_LGUI, KC_GRV
  ),
  [_DVORAK] = LAYOUT_5x6(
     KC_EQL, KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  , KC_MINS,
     KC_TAB, KC_QUOT, KC_COMM, KC_DOT, KC_P  , KC_Y  ,                   KC_F  , KC_G  , KC_C  , KC_R  , KC_L  , KC_SLSH,
     KC_ESC, KC_A  , KC_O  , KC_E  , KC_U  , KC_I  ,                         KC_D  , KC_H , KC_T  , KC_N  , KC_S, KC_BSLASH,
     KC_LSFT, LCTL_T(KC_SCLN)  , KC_Q  , KC_J , KC_K  , KC_X  ,                         KC_B  , KC_M  , KC_W, KC_V ,LCTL_T(KC_Z), KC_RSFT,
                      KC_GRV, FN,                                                       KC_LBRC,KC_RBRC,
                                      KC_BSPC, KC_DEL,                       KC_ENT, KC_SPC,
                                      KC_LALT, KC_LCTL,                      FN,  RALT_T(KC_PSCR),
                                      FN, KC_LGUI,                         KC_LGUI, KC_GRV

  ),
  [_FN] = LAYOUT_5x6(
      KC_F12, KC_F1,   KC_F2,   KC_F3,   KC_F4, KC_F5,                         KC_F6,   KC_F7,   KC_F8, KC_F9,   KC_F10,  KC_F11,
       _______, KC_F1,   KC_F2,   KC_F3,   KC_F4, _______,                   KC_HOME, KC_PGDN, KC_PGUP, KC_END, _______, _______,
       _______, KC_F5,   KC_F6,   KC_F7,   KC_F8, _______,                   KC_LEFT, KC_DOWN, KC_UP, KC_RGHT,  _______,_______,
       _______, KC_F9,   KC_F10,  KC_F11,  KC_F12,_______,                   _______,KC_VOLD, KC_VOLU,KC_MUTE,_______,_______,
                       RESET,_______,                                                         DF(_QWERTY) , DF(_DVORAK),
                                               _______,_______,            _______, _______,
                                               _______,_______,            _______,_______,
                                             _______,_______,            _______,_______
  )};
