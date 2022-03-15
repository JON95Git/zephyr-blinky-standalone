#include <device.h>
#include <toolchain.h>

/* 1 : /soc/rcc@40023800:
 * Direct Dependencies:
 *   - (/soc)
 *   - (/clocks/pll)
 * Supported:
 *   - (/soc/adc@40012000)
 *   - (/soc/can@40006400)
 *   - (/soc/dac@40007400)
 *   - (/soc/dma@40026000)
 *   - (/soc/dma@40026400)
 *   - (/soc/ethernet@40028000)
 *   - (/soc/i2c@40005400)
 *   - (/soc/i2c@40005800)
 *   - (/soc/i2c@40005c00)
 *   - (/soc/i2c@40006000)
 *   - (/soc/memory@40024000)
 *   - (/soc/memory-controller@a0000000)
 *   - (/soc/quadspi@a0001000)
 *   - (/soc/rng@50060800)
 *   - (/soc/rtc@40002800)
 *   - (/soc/sdmmc@40011c00)
 *   - (/soc/sdmmc@40012c00)
 *   - (/soc/serial@40004400)
 *   - /soc/serial@40004800
 *   - (/soc/serial@40004c00)
 *   - (/soc/serial@40005000)
 *   - (/soc/serial@40007800)
 *   - (/soc/serial@40007c00)
 *   - (/soc/serial@40011000)
 *   - /soc/serial@40011400
 *   - (/soc/spi@40003800)
 *   - (/soc/spi@40003c00)
 *   - (/soc/spi@40013000)
 *   - (/soc/spi@40013400)
 *   - (/soc/spi@40015000)
 *   - (/soc/spi@40015400)
 *   - (/soc/timers@40000000)
 *   - (/soc/timers@40000400)
 *   - (/soc/timers@40000800)
 *   - (/soc/timers@40000c00)
 *   - (/soc/timers@40001000)
 *   - (/soc/timers@40001400)
 *   - (/soc/timers@40001800)
 *   - (/soc/timers@40001c00)
 *   - (/soc/timers@40002000)
 *   - (/soc/timers@40010000)
 *   - (/soc/timers@40010400)
 *   - (/soc/timers@40014000)
 *   - (/soc/timers@40014400)
 *   - (/soc/timers@40014800)
 *   - (/soc/usb@40040000)
 *   - (/soc/usb@50000000)
 *   - (/soc/watchdog@40002c00)
 *   - /soc/pin-controller@40020000/gpio@40020000
 *   - /soc/pin-controller@40020000/gpio@40020400
 *   - /soc/pin-controller@40020000/gpio@40020800
 *   - /soc/pin-controller@40020000/gpio@40020C00
 *   - /soc/pin-controller@40020000/gpio@40021000
 *   - /soc/pin-controller@40020000/gpio@40021400
 *   - /soc/pin-controller@40020000/gpio@40021800
 *   - /soc/pin-controller@40020000/gpio@40021C00
 *   - /soc/pin-controller@40020000/gpio@40022000
 *   - /soc/pin-controller@40020000/gpio@40022400
 *   - /soc/pin-controller@40020000/gpio@40022800
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_rcc_40023800[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 12, 13, 3, 4, 5, 14, 6, 7, 8, 9, 15, 10, 11, DEVICE_HANDLE_ENDS };

/* 2 : /soc/interrupt-controller@40013c00:
 * Direct Dependencies:
 *   - (/soc)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_interrupt_controller_40013c00[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 3 : /soc/pin-controller@40020000/gpio@40022800:
 * Direct Dependencies:
 *   - (/soc/pin-controller@40020000)
 *   - /soc/rcc@40023800
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_pin_controller_40020000_S_gpio_40022800[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 4 : /soc/pin-controller@40020000/gpio@40022400:
 * Direct Dependencies:
 *   - (/soc/pin-controller@40020000)
 *   - /soc/rcc@40023800
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_pin_controller_40020000_S_gpio_40022400[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 5 : /soc/pin-controller@40020000/gpio@40022000:
 * Direct Dependencies:
 *   - (/soc/pin-controller@40020000)
 *   - /soc/rcc@40023800
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_pin_controller_40020000_S_gpio_40022000[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 6 : /soc/pin-controller@40020000/gpio@40021C00:
 * Direct Dependencies:
 *   - (/soc/pin-controller@40020000)
 *   - /soc/rcc@40023800
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_pin_controller_40020000_S_gpio_40021c00[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 7 : /soc/pin-controller@40020000/gpio@40021800:
 * Direct Dependencies:
 *   - (/soc/pin-controller@40020000)
 *   - /soc/rcc@40023800
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_pin_controller_40020000_S_gpio_40021800[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 8 : /soc/pin-controller@40020000/gpio@40021400:
 * Direct Dependencies:
 *   - (/soc/pin-controller@40020000)
 *   - /soc/rcc@40023800
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_pin_controller_40020000_S_gpio_40021400[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 9 : /soc/pin-controller@40020000/gpio@40021000:
 * Direct Dependencies:
 *   - (/soc/pin-controller@40020000)
 *   - /soc/rcc@40023800
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_pin_controller_40020000_S_gpio_40021000[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 10 : /soc/pin-controller@40020000/gpio@40020C00:
 * Direct Dependencies:
 *   - (/soc/pin-controller@40020000)
 *   - /soc/rcc@40023800
 * Supported:
 *   - (/soc/spi@40013000)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_pin_controller_40020000_S_gpio_40020c00[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 11 : /soc/pin-controller@40020000/gpio@40020800:
 * Direct Dependencies:
 *   - (/soc/pin-controller@40020000)
 *   - /soc/rcc@40023800
 * Supported:
 *   - (/gpio_keys/button_0)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_pin_controller_40020000_S_gpio_40020800[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 12 : /soc/pin-controller@40020000/gpio@40020400:
 * Direct Dependencies:
 *   - (/soc/pin-controller@40020000)
 *   - /soc/rcc@40023800
 * Supported:
 *   - (/leds/led_0)
 *   - (/leds/led_1)
 *   - (/leds/led_2)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_pin_controller_40020000_S_gpio_40020400[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 13 : /soc/pin-controller@40020000/gpio@40020000:
 * Direct Dependencies:
 *   - (/soc/pin-controller@40020000)
 *   - /soc/rcc@40023800
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_pin_controller_40020000_S_gpio_40020000[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 14 : /soc/serial@40011400:
 * Direct Dependencies:
 *   - (/soc)
 *   - (/soc/interrupt-controller@e000e100)
 *   - /soc/rcc@40023800
 *   - (/soc/pin-controller@40020000/usart6_rx_pg9)
 *   - (/soc/pin-controller@40020000/usart6_tx_pg14)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_serial_40011400[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 15 : /soc/serial@40004800:
 * Direct Dependencies:
 *   - (/soc)
 *   - (/soc/interrupt-controller@e000e100)
 *   - /soc/rcc@40023800
 *   - (/soc/pin-controller@40020000/usart3_rx_pd9)
 *   - (/soc/pin-controller@40020000/usart3_tx_pd8)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_serial_40004800[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };
