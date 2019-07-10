#include "holberton.h"
/**
* prime - calculate the prime number
*@n: number to verify
*@d: number to divide
*Return: the value
*/

int prime(int n, int d)
{
	if (n == d)
		return (1);
	if (n % d == 0 || n <= 1)
		return (0);
	return (prime(n, d + 1));
}

/**
* is_prime_number - Verify if n is prime
*@n: number to verify
*Return: 0 if n is not prime, 1 if n is prime
*/
int is_prime_number(int n)
{
	int d;

	d = 2;
	if (n == 1)
		return (0);
	return (prime(n, d));
}
