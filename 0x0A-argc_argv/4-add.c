#include <stdio.h>
#include <stdlib.h>

/**
 *main - function main
 *@argc: Number of arguments
 *@argv: Array of arguments
 *Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}
	int i;
	int j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}

		}
		int result = atoi(argv[i]);

		sum += result;
	}
	printf("%d\n", sum);
}

