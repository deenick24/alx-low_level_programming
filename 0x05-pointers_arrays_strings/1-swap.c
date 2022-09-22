#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: character to be swapped
 * @b: character to be swapped
 * Return: always 0.
 */
void swap_int(int *a, int *b)
{
int d;

d = *a;
*a = *b;
*b = d;
}
