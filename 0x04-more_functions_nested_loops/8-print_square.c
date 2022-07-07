#include "main.h"

/**
 * print_square - prints a square of 'size', followed by a new line.
 * @size: size of square wanted
 * Return: 0 if there is no hikky
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
