#include "main.h"

/**
* _isdigit - check for number letters
* @c: number to be checked
* Return: 0 / 1
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
