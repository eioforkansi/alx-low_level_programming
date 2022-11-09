#include "main.h"
/**
 *_islower -start
 *@c: input parameter
 *Return: end
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
