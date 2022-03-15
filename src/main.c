#include "gpio_user.h"

void main(void)
{
	hardware_config();
	while (1) {
		app();
	}
}
