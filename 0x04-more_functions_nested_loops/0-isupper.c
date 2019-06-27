#include "holberton.h"
/**
* _isupper - checks for uppercase character
* @c : character received
*Return: 1 is uppercase 0 otherwhise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
