#include "main.h"

/**
 * print_diagonal - draws a diagonal line with \
 * n number of times
 * @n: Number of spaces wanted
 *
 * Return: 0 is successful
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
