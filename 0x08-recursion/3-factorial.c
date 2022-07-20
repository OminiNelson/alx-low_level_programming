#include "main.h"

/**
 * factorial - print the product of all positve integers
 * that is between n and 0
 * @n: integer parameter or arguement
 *
 * Return: the factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
