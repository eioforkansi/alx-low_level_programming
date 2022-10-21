#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - entry point
 * Return:0
 */
/* betty style doc for function main goes there */
//int main(void)
void positive_or_negative(int i)
{

//	int n;
//
//	srand(time(0));
//	n = rand() - RAND_MAX / 2;
//	/* your code goes there */
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
//	return (0);
}
