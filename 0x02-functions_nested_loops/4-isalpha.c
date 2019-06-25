#include "holberton.h"
/**
* _isalpha - chack for aplphabetic character
* @c: character recieved
*
*Return: 1 a letter 0 otherwise
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
