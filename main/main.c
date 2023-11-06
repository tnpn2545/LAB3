#include <unistd.h>      	// header for usleep()
#include "driver/gpio.h"	// header for gpio
#include "LED.h"
const gpio_num_t LED1 = GPIO_NUM_23; 	//Define name 'GPIO_NUM_23' as 'LED1'


void app_main(void)
{
    LED_Init();
    while (true)
    {
        LED_On();
        usleep(500000);
        LED_Off();
        usleep(500000);
    }
}
