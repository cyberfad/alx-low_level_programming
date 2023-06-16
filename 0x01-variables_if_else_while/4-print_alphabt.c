#include <stdio.h>

/**
 * main - printing alphabets in lower case without some letters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'e')
			putchar(alphabet);
	}
	putchar('\n');
	return (0);
