#include "main.h"

/**
 *print_last_digit - start
 *@j: input argument
 *Return: end
 */

int print_last_digit(int j)
{
	int i = j % 10;

	if (i >= 0)
	{
	_putchar(i % 10 + '0');
	return (i);
	}
	if (i < 0)
	{
	i *= -1;
	_putchar(i % 10 + '0');
	return (i);
	}
	return (0);
}
