#ifndef PINOUT_H
#define PINOUT_H

// XXX choose led pin
// at32f435-start https://oshwlab.com/koendv/at32f435-board
#define LED0_PIN             GET_PIN(D, 13)
// at32f435-start https://oshwlab.com/koendv/at32f435-board
//#define LED0_PIN             GET_PIN(C, 6)
// AT32F435CGT7 core board
//#define LED0_PIN             GET_PIN(C, 13)

#define TARGET_SWCLK_DIR_PIN GET_PIN(A, 2)
#define TARGET_SWDIO_DIR_PIN GET_PIN(A, 3)
#define TARGET_SWCLK_PIN     GET_PIN(A, 4)
#define TARGET_SWDIO_PIN     GET_PIN(A, 5)
#define TARGET_TDI_PIN       GET_PIN(A, 6)
#define TARGET_SWO_PIN       GET_PIN(A, 7)
#define TARGET_RST_IN_PIN    GET_PIN(B, 10)
#define TARGET_RST_PIN       GET_PIN(B, 13)

#endif
