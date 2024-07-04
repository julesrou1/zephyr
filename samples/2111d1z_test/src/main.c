/*
 * Copyright (c) 2016 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdio.h>
#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/drivers/spi.h>
#include "led_test.c"
#include "spi_test.c"

int main(void)
{
	// led_test_main();
	spi_test_main();

	return 0;
}
