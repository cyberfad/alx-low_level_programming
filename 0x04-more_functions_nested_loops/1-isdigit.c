#include "main.h"

/**
 * isdigit: checks if a variable is a digit 
 * @c: variable to be checked
 * Return: 1 or 0 Success
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
