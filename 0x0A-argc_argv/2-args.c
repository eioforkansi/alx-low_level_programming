#include <stdio.h>

/**
 * main - Entry point
 * @argc: Number of arguments passed to main function
 * @argv: Pointer to a string array containing the names of arguments passed
 * Return: 0 value for success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", *(argv + i));
	return (0);
}
