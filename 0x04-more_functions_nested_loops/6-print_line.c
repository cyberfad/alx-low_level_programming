#include "main.h"

/**
 * print_line(int n)- prints a line on a whitespace using an underscore _
 * @n: how long the line should be
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}
