#include "main.h"
/**
 * _puts_recursion -  prints a string, followed by a new line
 * @s: pointer to an int that will be changed
 * Return: return void.
 */
void _puts_recursion(char *s)
{
	int t;

	t = 0;
	while (s[t] != '\0')
	{
		_putchar(s[t]);
		t++;
	}
	_putchar('\n');
}


