#include "function_pointers.h"
/**
 * int_index - Function that searches for an integer
 * @array: For tge array with data
 * @size: For the size of the array
 * @cmp: For the function pointer
 * Return: count of integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int m;

if (size <= 0)
return (-1);
if (array == NULL || cmp == NULL)
return (-1);

for (m = 0; m < size; m++)
{
if (cmp(array[i]) == 1)
return (i);
}
return (-1);
}
