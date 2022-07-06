#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * Description - im using if statements to check if it is
 * a-z or A-Z
 * @c: is the parameter that this program will accept,
 * remember that this parameter can be in ascii or int
 *
 * Return: 1 if its an alphabet otherwise return 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
