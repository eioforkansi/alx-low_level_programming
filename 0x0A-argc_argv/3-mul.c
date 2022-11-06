#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of arguments passed to main function
 * @argv: Pointer to a string array containing the names of arguments passed
 * Return: 0 value for success
 */

int main(int argc, char *argv[])
{
	int i, j, mul = 1;

	if (argc == 3)
	{
	for (i = 1; i < argc; i++)
	{
		j = atoi(argv[i]);
		mul = mul * j;
	}
	printf("%d\n", mul);
	return (0);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
}
