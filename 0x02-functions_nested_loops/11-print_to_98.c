#include <stdio.h>
/**
 *print_to_98 - start
 *@n: input argument
 *Return: end
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n ; n <= 98; n++)
			printf("%d, ", n);
	}
	else
	{
		for (n ; n >= 98; n--)
			printf("%d, ", n);
	}
}
