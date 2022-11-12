#include "main.h"

/**
 *_strdup - function that creates copy of string argument passed
 *@str: string to be copied
 *Return: NULL if insuficient memory,or else a pointer
 */

char *_strdup(char *str)
{
	int i, j = 0;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		j++;
	}
	j++;
	p = malloc(sizeof(char) * j);
	if (p == 0)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';
	return (p);

}
