#include "main.h"

/**
 * _isupper - detects if a character is in uppercase or not
 * @c: char to check
 * Return: 0 or 1 Success
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
