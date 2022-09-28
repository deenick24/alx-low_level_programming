#include "main.h"

void _puts_recursion(char *s)
{

	while (s[0] != '\0')
	{
		_putchar (s[0]);
		str++;
	}
	_putchar ('\n');
}
