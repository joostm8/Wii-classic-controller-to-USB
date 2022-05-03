/* Wii Classic Controller to USB adapter, uses "ported" version of arduino HID joystick library for STM32 Bluepill
*/

#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>
#include "Joystick.h"
#include <libopencm3/usb/usbd.h>

#define PORT_LED1 GPIOC
#define PIN_LED1 GPIO13
#define LITTLE_BIT 200000
#define RCC_LED1 RCC_GPIOC

Joystick_ joystick (JOYSTICK_DEFAULT_REPORT_ID, //HID report ID
					JOYSTICK_TYPE_GAMEPAD, // Joystick type
					8, // number of buttons
					1, // number of hat switches (dpads)
					false, // x axis
					false, // y axis
					false, // z axis
					false, // rx axis
					false, // ry axis
					false, // rz axis
					false, // rudder
					false, // throttle
					false, // accelerator
					false, // brake
					false // steeringwheel
					);

static void gpio_setup() {
	rcc_clock_setup_in_hse_8mhz_out_72mhz(); // Use this for "blue pill"
	rcc_periph_clock_enable(RCC_GPIOC);
	gpio_set_mode(GPIOC,GPIO_MODE_OUTPUT_2_MHZ,GPIO_CNF_OUTPUT_PUSHPULL,GPIO13);
}

extern usbd_device *usbd_dev;

int main(void){

	gpio_setup();

	joystick.begin(false); // begin joystick (will also initialize the USB)

	while(1){
		usbd_poll(usbd_dev);
		}

}

// blinky demo
// int main(void) {
//         rcc_periph_clock_enable(RCC_LED1);
// #if defined(STM32F1) /* F1 is a precious snowflake */
// 	gpio_set_mode(PORT_LED1, GPIO_MODE_OUTPUT_2_MHZ, GPIO_CNF_OUTPUT_PUSHPULL, PIN_LED1);
// #else /* everyone else is sane */
//         gpio_mode_setup(PORT_LED1, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, PIN_LED1);
// #endif
// 	gpio_set(PORT_LED1, PIN_LED1);
// #if defined(RCC_LED2)
//         rcc_periph_clock_enable(RCC_LED2);
//         gpio_mode_setup(PORT_LED2, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, PIN_LED2);
// #endif
// 	while(1) {
// 		/* wait a little bit */
// 		for (int i = 0; i < LITTLE_BIT; i++) {
// 			__asm__("nop");
// 		}
// 		gpio_toggle(PORT_LED1, PIN_LED1);
// #if defined(RCC_LED2)
// 		gpio_toggle(PORT_LED2, PIN_LED2);
// #endif
// 	}
// }

