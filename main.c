#include "stm32f10x.h"
#include "Delay.h"
#include "OLED.h"
#include "CountSensor.h"
#include "LED.h"

int main(void)
{
	LED_Init();
	LED1_ON();
	CountSensor_Init();
	OLED_Init();
	OLED_ShowString(1,1,"Count:");
	MX_GPIO_Init();

	while(1)	
	{
		HAL_GPIO_WritePin(GPIOA,GPIO_Pin_5, GPIO_PIN_SET);
		Delay_ms (50);
		HAL_GPIO_WritePin(GPIOA,GPIO_Pin_5, GPIO_PIN_RESET);
		Delay_ms (50);
	
	}
}
