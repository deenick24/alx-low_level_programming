#include "main.h"

void _puts_recursion(char *s)
{
	int str;
	
	str = 0;
	while (s[str] != '\0')
	{
		_putchar (s[str]);
		str++;
	}
	_putchar ('\n');
}
