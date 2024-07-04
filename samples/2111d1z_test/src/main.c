/*
 * Copyright (c) 2016 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "functions.h"
int main(void)
{
	if(!spi_test_main()){
		return 0;
	}

	led_test_main();

	return 1;
}
