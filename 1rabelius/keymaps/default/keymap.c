/* 
this firmware was made by coseyfannitutti
he gets full credit for it I just modyfied it to work for my Rabelius
 */
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_rabelius(
         KC_ESC, KC_F2 , KC_F4 , KC_F6 , KC_F8 , KC_F10, KC_F12,KC_SLCK,KC_MPLY, 
		 KC_F1 , KC_F3 , KC_F5 , KC_F7 , KC_F9 , KC_F11, KC_DEL,KC_MPRV,KC_MNXT, 
		 KC_GRV,  KC_2 ,  KC_4 ,  KC_6 ,  KC_8 ,  KC_0 , KC_EQL, KC_INS,KC_PSLS, 
          KC_1 ,  KC_3 ,  KC_5 ,  KC_7 ,  KC_9 ,KC_MINS,KC_BSPC,KC_NLCK,KC_PAST,   
		 KC_TAB,  KC_W ,  KC_R ,  KC_Y ,  KC_I ,  KC_P ,KC_RBRC,KC_PGUP, KC_P8 , 
          KC_Q ,  KC_E ,  KC_T ,  KC_U ,  KC_O ,KC_LBRC,KC_BSLS, KC_P7 , KC_P9 ,     
		  MO(1),  KC_S ,  KC_F ,  KC_H ,  KC_K ,KC_SCLN        ,KC_PGDN, KC_P5 , 
          KC_A ,  KC_D ,  KC_G ,  KC_J ,  KC_L ,KC_QUOT, KC_ENT, KC_P4 , KC_P6 , 
		KC_LSFT,  KC_Z ,  KC_C ,  KC_B ,  KC_M , KC_DOT        , KC_UP , KC_P2 , 
        KC_BSLS,  KC_X ,  KC_V ,  KC_N ,KC_COMM,KC_SLSH,KC_RSFT, KC_P1 , KC_P3 ,  
		KC_LCTL,KC_LALT,KC_CAPS,KC_PPLS        ,KC_RGUI,KC_RCTL,KC_DOWN, KC_P0 ,   
		KC_LGUI, KC_SPC,KC_PMNS,KC_PENT,KC_RALT, MO(1),KC_LEFT,KC_RGHT,KC_PDOT ),

  [1] = LAYOUT_rabelius(
        KC_MUTE,KC_VOLU,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_PSCR,KC_MSTP, 
		KC_VOLD,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_PAUS,KC_TRNS,KC_TRNS, 
		KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, 
		KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_CALC,KC_TRNS,   
		KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_HOME,KC_TRNS, 
		KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,     
		KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS        , KC_END,KC_TRNS, 
		KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, 
		KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS        ,KC_BRIU,KC_TRNS, 
		KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,  
		KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS        ,KC_TRNS,KC_TRNS,KC_BRID,KC_TRNS,   
		KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_PCMM)
};
