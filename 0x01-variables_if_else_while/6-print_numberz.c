#include <stdio.h>
/**
 * main - start
 * Return: end
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	putchar((i % 10) + '0');
	putchar('\n');
	return (0);
}
