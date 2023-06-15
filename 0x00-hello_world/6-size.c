#include<stdio.h>
 /**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of char:   %d bytes", sizeof(char));
	printf("size of int:    %d bytes", sizeof(int));
	printf("size of long int: %d bytes", sizeof(long int));
	printf("size of float:  %d bytes", sizeof(float));
	printf("size of long long int: %d bytes", sizeof(long long int));
	return (0);
}
