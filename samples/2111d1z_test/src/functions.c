#include "functions.h"

static const struct gpio_dt_spec led0 = GPIO_DT_SPEC_GET(LED0_NODE, gpios);
static const struct gpio_dt_spec led1 = GPIO_DT_SPEC_GET(LED1_NODE, gpios);
static const struct gpio_dt_spec led2 = GPIO_DT_SPEC_GET(LED2_NODE, gpios);


int led_test_main(){
	int ret0,ret1,ret2;
	bool led_state = true;
	if (!gpio_is_ready_dt(&led0) || !gpio_is_ready_dt(&led1) || !gpio_is_ready_dt(&led2)) {
		return 0;
	}
	
	ret0 = gpio_pin_configure_dt(&led0, GPIO_OUTPUT_ACTIVE);
	ret1 = gpio_pin_configure_dt(&led1, GPIO_OUTPUT_ACTIVE);
	ret2 = gpio_pin_configure_dt(&led2, GPIO_OUTPUT_ACTIVE);
    if (ret0 < 0 || ret1 < 0 || ret2 < 0) {
		return 0;
	}

    ret1 = gpio_pin_toggle_dt(&led1);

	while (1) {
		ret0 = gpio_pin_toggle_dt(&led0);
        ret1 = gpio_pin_toggle_dt(&led1);
        ret2 = gpio_pin_toggle_dt(&led2);

		if (ret0 < 0 || ret1 < 0 || ret2 < 0) {
			return 0;
		}

		led_state = !led_state;
		printf("LED state: %s\n", led_state ? "ON" : "OFF");
		k_msleep(SLEEP_TIME_MS);
	}

}

uint8_t my_buff[4]={0};
struct spi_buf my_spi_buf={.buf = my_buff, .len = 4 * 8};
const struct spi_buf_set rx_buff = {&my_spi_buf, 1};
int ret;

int spi_test_main(){
    // Get the device information from the device tree
    const struct device *const dev = DEVICE_DT_GET(SPI_ADIN2111);

	if (!device_is_ready(dev)) {
		printf("%s: device not ready.\n", dev->name);
		return 0;
	}else{
        printf("%s: device ready.\n", dev->name);
    };

    // Get the SPI configuration from the devices tree and store the config in spi0
    static const struct spi_dt_spec spi0 = SPI_DT_SPEC_GET(SPI_ADIN2111,SPI_OP,0);
    // As an example the frequency for the spi bus is printed the value match the device tree
    printf("%d\n", spi0.config.frequency);

    // Now I am trying to read the phy adress still working on that.
    // ret = spi_read(dev,&spi0.config,&rx_buff);

    return 1;
}