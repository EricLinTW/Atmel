/*
 * GccApplication1.cpp
 *
 * Created: 2016/10/5 上午 09:23:45
 *  Author: NIU
 */ 

/*
#include <avr/io.h>
#include "w5_number.h"
volatile long k;

int main(void)
{
    DDRD |= (1<<a) | (1<<b) | (1<<c) | (1<<d) | (1<<e);
	DDRC |= (1<<f) | (1<<g);
	while(1)
	{
		k=add(2, 3);
		if(k==5)
		{
			PORTD |= (1<<c);
			PORTD &= (~(1<<a)) & (~(1<<b)) &  (~(1<<d)) & (~(1<<e));
			PORTC &= (~(1<<g));
			PORTC |= (1<<f);
			five();
			delay_105(3000);//k=0--->k=2999
		}
		else
		{
			PORTD |=(1<<e);
			PORTD &=(~(1<<a)) & (~(1<<b)) & (~(1<<c)) & (~(1<<d));
			PORTC &=(~(1<<g));
			PORTC |=(1<<f);
			zero();
			delay_105(300);//k=0--->k=299
		}
	}
}
*/