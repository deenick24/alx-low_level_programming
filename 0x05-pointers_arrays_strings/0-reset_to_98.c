#include "main.h"
/**
 * reset_to_98 - check the code
 * @n: character to be checked
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
	int a;

	a = 402;
	n = &a;
	*n = 98;
	_putchar('0' + a);
}
