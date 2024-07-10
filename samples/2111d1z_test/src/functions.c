#include "functions.h"

static const struct gpio_dt_spec led0 = GPIO_DT_SPEC_GET(LED0_NODE, gpios);
static const struct gpio_dt_spec led1 = GPIO_DT_SPEC_GET(LED1_NODE, gpios);
static const struct gpio_dt_spec led2 = GPIO_DT_SPEC_GET(LED2_NODE, gpios);

int led_example(){
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


uint32_t tx_buf=0x0001U;
uint32_t rx_buf;
struct spi_buf tx_spi_buf={.buf = (void *)&tx_buf, .len = 1};
const struct spi_buf_set tx_buff_set = {.buffers=&tx_spi_buf, .count=1};

struct spi_buf rx_spi_buf={.buf = (void *)&rx_buf, .len = 1};
const struct spi_buf_set rx_buff_set = {.buffers=&rx_spi_buf, .count=1};


int err;
int gpio_state;
#define BYPASS_NODE DT_ALIAS(bypassuc)

static const struct gpio_dt_spec bypass_pin = GPIO_DT_SPEC_GET(BYPASS_NODE, gpios);

int spi_example(){

	if (!gpio_is_ready_dt(&bypass_pin)) {
		printf("Bypass is pin not ready.\n");
		return 0;
	}

	if (gpio_pin_configure_dt(&bypass_pin, GPIO_OUTPUT_HIGH) < 0) {
		printf("Fail to set Bypass pin high.\n");
		return 0;
	}
	printf("Bypass relay pin is HIGH\n");

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

    // As an example the frequency for the spi bus is printed
    printf("%d\n", spi0.config.frequency);

    // Example of transmition : 
	// (Not sure what to enter in tx at this stage.) the transceive is working but the rx_buf is null

	err = spi_transceive_dt(&spi0,&tx_buff_set,&rx_buff_set);

	if (err<0){
		printf("spi_transceive_dt() failed, err: %d\n",err);
		return err;
	}	

	printf("Read from SPI PHY ID REG : %d \n",rx_buf);

    return 1;
}