#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Function that adds two integer
 * @a: Integer
 * @b: Integer
 *
 * Return: Integer
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function that substracts two integer
 * @a: Integer
 * @b: Integer
 *
 * Return: Integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function that multiplies two integer
 * @a: Integer
 * @b: Integer
 *
 *  Return: Integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function that divides two integer
 * @a: Integer
 * @b: Integer
 *
 *  Return: Integer
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}

	return (a / b);
}

/**
 * op_mod - Function that modulus two integer
 * @a: Integer
 * @b: Integer
 *
 * Return: Integer
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}

	return (a % b);
}
