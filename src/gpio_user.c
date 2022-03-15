#include <zephyr.h>
#include <drivers/gpio.h>

#define SLEEP_TIME_MS   150

/* The devicetree node alias. */
#define LED1_NODE DT_ALIAS(led1)
#define LED2_NODE DT_ALIAS(led2)

/*
 * A build error on this line means your board is unsupported.
 * See the sample documentation for information on how to fix this.
 */
static const struct gpio_dt_spec led1 = GPIO_DT_SPEC_GET(LED1_NODE, gpios);
static const struct gpio_dt_spec led2 = GPIO_DT_SPEC_GET(LED2_NODE, gpios);

void hardware_config(void)
{
	int ret;

	if (!device_is_ready(led1.port)) {
		return;
	}

	if (!device_is_ready(led2.port)) {
		return;
	}

	ret = gpio_pin_configure_dt(&led1, GPIO_OUTPUT_ACTIVE);
	if (ret < 0) {
		return;
	}

	ret = gpio_pin_configure_dt(&led2, GPIO_OUTPUT_ACTIVE);
	if (ret < 0) {
		return;
	}
	
	ret = gpio_pin_set_dt(&led1, 1);
	if (ret < 0) {
		return;
	}

	ret = gpio_pin_set_dt(&led2, 0);
	if (ret < 0) {
		return;
	}
	k_msleep(SLEEP_TIME_MS);
}

void app(void)
{
	int ret;
	ret = gpio_pin_toggle_dt(&led1);
	if (ret < 0) {
		return;
	}

	ret = gpio_pin_toggle_dt(&led2);
	if (ret < 0) {
		return;
	}
	k_msleep(SLEEP_TIME_MS);
}