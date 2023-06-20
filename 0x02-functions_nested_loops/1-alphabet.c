#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main (void)
{
	void print_alphabet(void)
	{
		int num;
		for (num = 97; num <= 122; num++)
		{
			putchar(num);
		}
	}
	putchar('\n');
	print_alphabet();

	return (0);
}
