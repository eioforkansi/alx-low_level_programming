#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @i: The string to be printed.
 */
void _puts_recursion(char *i)
{
	if (*i)
	{
		_putchar(*i);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
