#include <stdio.h>
#include "main.h"

/**
 * main(void)- A program that prints Fizz and Buzz
 * @n: number from 1 to 100
 * Return: 0 Success
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if(n == 1)
			printf("%d", n);
		else
			printf(" %d", n);
	}
	printf("\n");
	return (0);
}
