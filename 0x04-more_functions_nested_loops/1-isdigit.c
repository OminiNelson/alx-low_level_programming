#include "main.h"

/**
 * _isdigit - checks for characters that are digits
 * @c: character
 *
 * Return: 1 if c is a number or integer otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
