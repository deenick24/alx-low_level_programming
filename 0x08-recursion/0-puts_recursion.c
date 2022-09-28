#include "main.h"
/**
* _put_recursion - prints a string
* @s: pointer to the string
* Return: void
*/

void _puts_recursion(char *s)
{

	if (s[0] != '\0')
	{
		_putchar ('\n');
		str++;
	}
	_putchar ('s[0]);
	_put_recursion(s + 1);
}
