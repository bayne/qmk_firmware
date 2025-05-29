#include QMK_KEYBOARD_H
#include "version.h"
#include "eggs.h"

#define KC_LCTRL KC_LCTL
#define KC_LBRACKET KC_LBRC
#define KC_RBRACKET KC_RBRC
#define KC_SCOLON KC_SCLN
#define KC_BSPACE KC_BSPC
#define KC_LSHIFT KC_LSFT
#define KC_RSHIFT KC_RSFT
#define KC_BSLASH KC_BSLS
#define KC_SCROLLLOCK KC_SCRL
#define RKVM_PERSONAL SS_TAP(X_HELP)
#define RKVM_WORK SS_TAP(X_PAUS)
#define QTILE_W1 SS_LCTL(SS_LALT("9")) SS_DELAY(50)
#define QTILE_W2 SS_LCTL(SS_LALT("0")) SS_DELAY(50)
#define FOCUS_MBP_DISPLAY SS_TAP(X_WWW_SEARCH) SS_DELAY(50)
#define QTILE_1 SS_LGUI("1")
#define QTILE_PREV SS_LGUI(SS_TAP(X_GRAVE))
#define SYNERGY_PERSONAL SS_LALT(SS_LCTL("7")) SS_DELAY(50)
#define SYNERGY_MBP SS_LALT(SS_LCTL("8")) SS_DELAY(50)

#define PERSONAL_SW SYNERGY_PERSONAL RKVM_PERSONAL QTILE_PREV
#define WORK_1_SW SYNERGY_PERSONAL RKVM_PERSONAL QTILE_W1 RKVM_WORK SS_TAP(X_KB_VOLUME_UP)
#define WORK_2_SW SYNERGY_PERSONAL RKVM_PERSONAL QTILE_W2 RKVM_WORK SS_TAP(X_KB_VOLUME_DOWN)
#define MBP_SW SYNERGY_PERSONAL RKVM_PERSONAL QTILE_W2 FOCUS_MBP_DISPLAY SYNERGY_MBP
#define SYNERGY_7_SW SYNERGY_PERSONAL RKVM_PERSONAL
#define SYNERGY_8_SW SYNERGY_PERSONAL RKVM_PERSONAL SYNERGY_MBP

enum custom_keycodes {
  VRSN = SAFE_RANGE,
  EGGS,
  TOAST,
  WORK_1,
  WORK_2,
  WORK_MBP,
  SYNERGY_7,
  SYNERGY_8,
  PERSONAL,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_DELETE, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPACE,
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TAB,                                         KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,
    KC_ESCAPE,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,
    KC_TRANSPARENT, MT(MOD_LSFT, KC_Z),KC_X,           KC_C,           KC_V,           KC_B,           TG(2),                                          LGUI(KC_ENTER), KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSHIFT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LALT,        MO(1),                                                                                                          KC_MINUS,       KC_EQUAL,       KC_LBRACKET,    KC_RBRACKET,    TG(1),
                                                                                                    SYNERGY_7,      PERSONAL,     PERSONAL, SYNERGY_8,
                                                                                                                    WORK_1,       WORK_1,
                                                                                    KC_SPACE,       KC_LCTRL,       WORK_MBP,     WORK_2,   KC_LGUI,        KC_ENTER
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LSHIFT,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MINUS,       KC_EQUAL,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LGUI,        KC_LALT,        LALT(KC_SPACE)
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          TOAST,                                 KC_DELETE,      KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, EGGS,                                           KC_SCROLLLOCK,  KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_TRANSPARENT, KC_TRANSPARENT, KC_F12,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_LEFT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_DELETE,      KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_MS_WH_UP,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_MS_BTN1,     KC_MS_BTN2
  ),
};



bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case VRSN:
                SEND_STRING(QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
                return false;
            case EGGS:
                SEND_STRING_DELAY(S_EGGS, 5);
                return false;
            case TOAST:
                SEND_STRING(S_TOAST);
                return false;
            case WORK_1:
                SEND_STRING(WORK_1_SW);
                return false;
            case WORK_2:
                SEND_STRING(WORK_2_SW);
                return false;
            case WORK_MBP:
                SEND_STRING(MBP_SW);
                return false;
            case PERSONAL:
                SEND_STRING(PERSONAL_SW);
                return false;
            case SYNERGY_7:
                SEND_STRING(SYNERGY_7_SW);
                return false;
            case SYNERGY_8:
                SEND_STRING(SYNERGY_8_SW);
                return false;
        }
    }
    return true;
}

// Runs just one time when the keyboard initializes.
void keyboard_post_init_user(void) {
#ifdef RGBLIGHT_COLOR_LAYER_0
    rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
};

// Runs whenever there is a layer state change.
layer_state_t layer_state_set_user(layer_state_t state) {
    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();

    uint8_t layer = get_highest_layer(state);
    switch (layer) {
        case 0:
#ifdef RGBLIGHT_COLOR_LAYER_0
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
            break;
        case 1:
            ergodox_right_led_1_on();
#ifdef RGBLIGHT_COLOR_LAYER_1
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_1);
#endif
            break;
        case 2:
            ergodox_right_led_2_on();
#ifdef RGBLIGHT_COLOR_LAYER_2
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_2);
#endif
            break;
        case 3:
            ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_3
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_3);
#endif
            break;
        case 4:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
#ifdef RGBLIGHT_COLOR_LAYER_4
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_4);
#endif
            break;
        case 5:
            ergodox_right_led_1_on();
            ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_5
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_5);
#endif
            break;
        case 6:
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_6
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_6);
#endif
            break;
        case 7:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_7
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_7);
#endif
            break;
        default:
            break;
    }

    return state;
};
