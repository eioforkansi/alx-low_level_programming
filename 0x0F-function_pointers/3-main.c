#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main - Function that perfroms simple operations
* @argc: For the number of arguments
* @argv: For the array of arguments
*
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	int (*cal)(int, int);
	char *operator;

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	cal = get_op_func(operator);
	if (!cal)
	{
		printf("Error\n");
		return (99);
	}
	if (((*cal == op_div) || (*cal == op_mod)) && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	result = cal(num1, num2);
	printf("%d\n", result);

	return (0);
}
