#include "main.h"

/**
 * print_numbers(void) - print characters 0 to 9 using _putchar
 *
 * Return: void
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
