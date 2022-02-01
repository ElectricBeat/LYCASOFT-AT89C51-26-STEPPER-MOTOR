#include<reg51.h>
#include "8051_delay.h"

void main()
{
	while(1)
	{
		P2=0X08;
		delay(50);
		P2=0X02;
		delay(50);
		P2=0X04;
		delay(50);
		P2=0X01;
		delay(50);
	}
}