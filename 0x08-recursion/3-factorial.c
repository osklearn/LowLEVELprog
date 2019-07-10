#include "holberton.h"
/**
* factorial - Calculate the factorial of a given number
*@:
*Return: 0 (success)
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
