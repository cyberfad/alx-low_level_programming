#include "main.h"

/**
 * print_line(int n)- prints a line on a whitespace using an underscore _
 * @n: how long the line should be
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
