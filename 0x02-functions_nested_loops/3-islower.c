#include "holberton.h"
#include <ctype.h>
/**
* _islower - chack for lowercase character
* @c: character reciebed
*
*Return: 1 a letter 0 otherwise
*/

int _islower(int c)
{
	if (islower(c) == 0)
		return (0);
	else
		return (1);
}
