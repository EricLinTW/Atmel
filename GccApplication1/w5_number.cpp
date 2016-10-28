/*
 * CPPFile1.cpp
 *
 * Created: 2016/10/12 上午 10:02:09
 *  Author: Aran
 */ 
#include "w5_number.h"
#include <avr/io.h>

void delay_105(volatile long m) //subroutine
{
	for(volatile long k=0; k<m; k++);
}
void five(void)
{
	PORTD |= (1<<b) | (1<<e);
	PORTD &= (~(1<<a)) & (~(1<<c)) & (~(1<<d));
	PORTC &= (~(1<<f)) & (~(1<<g));
}
void zero(void)
{
	PORTD |= (1<<b) | (1<<e) | (~(1<<a)) | (~(1<<c)) | (~(1<<d));
	PORTC |= (~(1<<f)) | (~(1<<g));
}
/*
char add(char i, char j)
{
	return i+j;
}
*/
int add(int i, int j)
{
	return i+j;
}


void two(void)
{
	PORTD &= (~(1<<a)) & (~(1<<b)) & (~(1<<d)) & (~(1<<e));
	PORTC &= (~(1<<f)) & (~(1<<g));
	PORTD |= (1<<c);
	PORTC |= (1<<f);
}
void four(void)
{
	PORTD &= (~(1<<b)) & (~(1<<c));
	PORTC &= (~(1<<f)) & (~(1<<g));
	PORTD |= (1<<a) | (1<<d) | (1<<e);
}
void six(void)
{
	PORTD &= (~(1<<a)) & (~(1<<c))& (~(1<<d)) & (~(1<<e));
	PORTC &= (~(1<<f)) & (~(1<<g));
	PORTD |= (1<<b);
}
void eight(void)
{
	PORTD &= (~(1<<a)) &(~(1<<b)) & (~(1<<c)) & (~(1<<d)) & (~(1<<e));
	PORTC &= (~(1<<f)) & (~(1<<g));
}
void one(void)
{
	PORTD &= (~(1<<b)) & (~(1<<c));
	PORTC |= (1<<f) | (1<<g);
	PORTD |= (1<<a) | (1<<d) | (1<<e);
}
void three(void)
{
	PORTD &= (~(1<<a)) & (~(1<<c)) & (~(1<<d)) & (~(1<<e));
	PORTC &= (~(1<<g));
	PORTD |= (1<<b);
	PORTC |= (1<<f);
}
void seven(void)
{
	PORTD &= (~(1<<a)) &(~(1<<b)) & (~(1<<c)) ;
	PORTC |= (1<<f) | (1<<g);
	PORTD |= (1<<d) | (1<<e);
}
	
void nine(void)
{
	PORTD &= (~(1<<a)) &(~(1<<b)) & (~(1<<c)) & (~(1<<e));
	PORTC &= (~(1<<f)) & (~(1<<g));
	PORTD |=(1<<d);
}