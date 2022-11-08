#include "main.h"

/**
 *_puts - function name
 *@s:function parameter
 *Return: 0
 */

void _puts(char *s)
{
	int i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
		_putchar('\n');
}
