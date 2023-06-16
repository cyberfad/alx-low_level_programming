#include<stdio.h>

/**
 * main - printing digits 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 48; number < 58; number++)
		putchar(number);
	putchar('\n');
	return (0);
}
