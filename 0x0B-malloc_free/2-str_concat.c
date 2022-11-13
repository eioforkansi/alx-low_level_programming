#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 *str_concat - function that creates copy of string argument passed
 *@s1: string to be updated
 *@s2: string to be copied
 *Return: NULL if insuficient memory,or else a pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i, l1, l2, l3;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	l3 = l1 + l2;
	l3--;
	p = malloc(sizeof(char) * l3);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		p[i] = s1[i];
	}
	for (i = 0; i <= l2; i++)
	{
		p[l1 + i] = s2[i];
	}
	return (p);
}
