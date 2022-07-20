#include "main.h"

/**
 * _sqrt_recursion - main function
 * _sqrt - _sqrt_recursion
 * @n: the interger arguement
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - _sqrt_recursion
 * @i: dummy integer to help get the square root
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	else if ((i * i) > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
