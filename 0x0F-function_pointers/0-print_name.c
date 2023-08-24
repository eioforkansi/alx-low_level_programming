#include "function_pointers.h"
#include<stdlib.h>
/**
 * print_name - Funtion that prints a name
 * @name: for person's name
 * @f: for pointer to a function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	f(name);
}
