#include "holberton.h"
/**
* calc - helps to calculate the square root
*@n: number
*@i: increment
*Return: the square root
*/
int calc(int n, int i)
{
	if ((i * i) == n)
		return (i);
	else if ((i * i) < n)
		return (calc(n, i + 1));
	else
		return (-1);
}

/**
* _sqrt_recursion - Calculate the natural square root of a number
*@n: number to calculate a square root
*Return: the square root but if the number don't have it -1
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (calc(n, 1));
}
