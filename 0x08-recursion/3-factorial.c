#include "holberton.h"
/**
* factorial - Calculate the factorial of a given number
*@n: number to calculate the factorial
*Return: the factorial of a number or -1 if the number is less than 0
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
