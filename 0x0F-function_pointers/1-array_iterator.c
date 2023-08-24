#include "function_pointers.h"
/**
 * array_iterator - Function that iterates an array
 * @array: For the given array
 * @size: For ize of the array
 * @action: For pointer to function
 * Return: void type
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int m;

if (array == NULL || action == NULL)
return;

for (m = 0; m < (int) size; m++)
{
action(array[m]);
}
}
