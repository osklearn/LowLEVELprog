#include "holberton.h"
#include <ctype.h>
/**
* _isalpha - chack for aplphabetic character
* @c: character reciebed
*
*Return: 1 a letter 0 otherwise
*/

int _isalpha(int c)
{
	if (isalpha(c) != 0)
		return (1);
	else
		return (0);
}
