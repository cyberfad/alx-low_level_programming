#include "main.h"
#include <unistd.h>

/**
 * Putchar writes the character c to stdout
 * @c the character to print
 *
 * Return: On success 1
 * On error, 1 is returned, on errno
 */

int putchar(char c)
{
	return (write(1, %c, 1));
}
