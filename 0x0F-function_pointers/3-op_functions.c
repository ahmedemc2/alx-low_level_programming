#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - function that add to integrs
 *
 * @a : the first integer
 * @b: the second integer
 *
 * Return: the sum of integers
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that sub an integrs from an other
 *
 * @a : the first integer
 * @b: the second integer
 *
 * Return: the diffrence of integers
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiply to integrs
 *
 * @a : the first integer
 * @b: the second integer
 *
 * Return: the product of integers
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that do the operation of division of two integrs
 *
 * @a : the first integer
 * @b: the second integer
 *
 * Return: the result of division of integers
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that returns the remainder of the division of two integrs
 *
 * @a : the first integer
 * @b: the second integer
 *
 * Return: the remainder of the division of integers
*/

int op_mod(int a, int b)
{
	return (a % b);
}
