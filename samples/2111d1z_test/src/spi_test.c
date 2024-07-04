#include <zephyr/logging/log.h>
LOG_MODULE_REGISTER(app, LOG_LEVEL_INF);

#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/devicetree.h>
#include <stdio.h>
#include <string.h>
#include <zephyr/drivers/spi.h>

#define SPI0_NODE	DT_NODELABEL(spi0)


int spi_test_main(){
    const struct device *const dev = DEVICE_DT_GET(SPI0_NODE);

	if (!device_is_ready(dev)) {
		printf("%s: device not ready.\n", dev->name);
		return 0;
	}
    printf("test");

    
    // printf("%d",phy_adin2111_an_state_read(*dev));
    
    while (true)
    {
        /* code */
    }
    return 0;
}