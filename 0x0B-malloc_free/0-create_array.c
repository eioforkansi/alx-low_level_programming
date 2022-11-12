#include "main.h"

/**
 *create_array - function that creates an array in heap segment of the memory
 *@size: size of array elements to be created
 *@c: charater to be stored as element of array
 *Return: NULL if size == 0, else a pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		p = malloc(sizeof(char) * size);
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
		return (p);
	}
}
