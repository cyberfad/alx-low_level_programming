#include "main.h"

/**
 * print_diagonal(int n)- print thetescape chareacter a number of times
 * Return: void
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			_putchar('\n');
		else
			_putchar('\\');
	}
	_putchar('\n');
}
