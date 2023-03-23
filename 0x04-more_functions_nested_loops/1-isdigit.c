#include "main.h"

/*
 * _isdigit -checks if parameter is digit .
 *@c: input character.
 *return 1 if is an digit character,0 in other case.
 */

int _isdigit(int c)
{
	if(c   >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
