#include <stdio.h>

/**
 * main - printing single digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		printf("%d", number);
	putchar('\n');
	return (0);
}