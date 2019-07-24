#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* op_add - function that sum 2 numbers
*@a: first number
*@b: second number
*Return: the sum of the numbers
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - function that substract 2 numbers
*@a: first number
*@b: second number
*Return: the substract of the numbers
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - function that multiply 2 numbers
*@a: first number
*@b: second number
*Return: the multiply of the numbers
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - function that divide 2 numbers
*@a: first number
*@b: second number
*Return: the division of the numbers
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - function that calculate the remainder of the division of 2 numbers
*@a: first number
*@b: second number
*Return: the remainder of the division of the numbers
*/
int op_mod(int a, int b)
{
	return (a % b);
}
