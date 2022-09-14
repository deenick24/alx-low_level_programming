#include "main.h"
/**
 * print_times_table - n times table
 * @n: number to be used
 * Return: returns void
 */
void print_times_table(int n)
{
		int i, j, prod;

		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
																							prod = i * j;

				if (prod <= n)
					_putchar(' ');
				else
					_putchar((prod / 10) + '0')
					_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
		if (n > 15)
			return (0);
}
