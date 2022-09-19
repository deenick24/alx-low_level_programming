#include "main.h"
/**
 * reset_to_98 - check the code
 * @n: character to be checked
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
	int a;
	int *p;

	a = 402;
	p = &a;
	*n = 98;
	reset_to_98(p);
}
