#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "Servo.h"
#include "Key.h"
#include "MPU6050.h"

uint8_t KeyNum;
float Angle;
int16_t AX, AY, AZ, GX, GY, GZ;


int main(void)
{
	OLED_Init();
	MPU6050_Init();
	Servo_Init();
	Key_Init();
	
	
	
	OLED_ShowString(1, 1, "Angle:");
	
	while (1)
	{

		Servo_SetAngle(Angle);

	}
}
