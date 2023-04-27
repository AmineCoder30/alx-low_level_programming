#include <stdio.h>

/**
 * bmain - this function is to  executed before main
 * Return: void function no return.
 * 
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}