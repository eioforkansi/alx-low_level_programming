#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - Function that sum of all its parameters
* @n: For the number of argument
* Return: sum or if n == 0, return 0
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	va_list arguments;

	va_start(arguments, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arguments, const unsigned int);
	}
	va_end(arguments);

	return (sum);
}
