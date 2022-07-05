#include "main.h"

/**
 * _islower - this will check if a character is lower case
 *
 * Description - i will use if and else statements to check
 * @c: is the parameter this fuction will accept
 * and check if it is lower case
 *
 * Return: 1 if is lower otherwise return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
