/* 1000 msec = 1 sec */
#define SLEEP_TIME_MS   1000

/* The devicetree node identifier for the "led0" alias. */
#define LED0_NODE DT_ALIAS(led0)
#define LED1_NODE DT_ALIAS(led1)
#define LED2_NODE DT_ALIAS(led2)

static const struct gpio_dt_spec led0 = GPIO_DT_SPEC_GET(LED0_NODE, gpios);
static const struct gpio_dt_spec led1 = GPIO_DT_SPEC_GET(LED1_NODE, gpios);
static const struct gpio_dt_spec led2 = GPIO_DT_SPEC_GET(LED2_NODE, gpios);

// void led_test_main(void);

int led_test_main(){

	int ret0,ret1,ret2;
	bool led_state = true;

	if (!gpio_is_ready_dt(&led0)) {
		return 0;
	}
	if (!gpio_is_ready_dt(&led1)) {
		return 0;
	}
	if (!gpio_is_ready_dt(&led2)) {
		return 0;
	}

	ret0 = gpio_pin_configure_dt(&led0, GPIO_OUTPUT_ACTIVE);
	if (ret0 < 0) {
		return 0;
	}
	ret1 = gpio_pin_configure_dt(&led1, GPIO_OUTPUT_ACTIVE);
	if (ret1 < 0) {
		return 0;
	}
	ret2 = gpio_pin_configure_dt(&led2, GPIO_OUTPUT_ACTIVE);
	if (ret2 < 0) {
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