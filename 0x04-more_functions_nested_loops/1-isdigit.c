#include "holberton.h"
/**
* _isdigit - check if is a number
* @c: character received
*Return: 0 (success)
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
