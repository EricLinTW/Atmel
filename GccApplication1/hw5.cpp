/*
 * hw5.cpp
 *
 * Created: 2016/10/12 上午 11:23:07
 *  Author: Aran
 */ 
#include <avr/io.h>
#include "w5_number.h"
volatile long k;

int main(void)
{
    DDRD |= (1<<a) | (1<<b) | (1<<c) | (1<<d) | (1<<e);
	DDRC |= (1<<f) | (1<<g);
	while(1)
	{
		k=add(2134, 7612);
		if(k>10000)
		{
			one();delay_105(100000);
			three();delay_105(100000);
			five();delay_105(100000);
			seven();delay_105(100000);
			nine();delay_105(100000);
		}
		else
		{
			zero();delay_105(100000);
			two();delay_105(100000);
			four();delay_105(100000);
			six();delay_105(100000);
			eight();delay_105(100000);
		}
	}
}
