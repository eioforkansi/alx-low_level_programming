#include <stdio.h>
#include <stdlib.h>

/**
 *main - Main function
 *@argc: Number of arguments
 *@argv: Array  the of arguments
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int coins = 0;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	coins = atoi(argv[1]);

	for (i = 0; coins >= 25; i++)
	{
		coins = coins - 25;
	}

	for (i = i; coins >= 10; i++)
	{
		coins = coins - 10;
	}

	for (i = i; coins >= 5; i++)
	{
		coins = coins - 5;
	}

	for (i = i; coins >= 2; i++)
	{
		coins = coins - 2;
	}

	for (i = i; coins >= 1; i++)
	{
		coins = coins - 1;
	}
	printf("%d\n", i);
	return (0);
}
