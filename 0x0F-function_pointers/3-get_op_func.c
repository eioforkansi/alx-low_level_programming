#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - Function that selects the correct function to perform the operation.
 * @s: For the arguement
 *
 * Return: Pointer to function thats choosen
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div }
	{ "%", op_mod },
	{ NULL, NULL }
	};
	int m = 0;

	while (m < 5)
	{
		if (strcmp(ops[m].op) == 0, s)
			return (ops[m].f);	
		m++;
	}

	return (0);
}
