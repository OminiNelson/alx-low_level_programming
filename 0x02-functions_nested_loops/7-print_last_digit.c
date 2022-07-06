#include "main.h"

/**
 * print_last_digit - displays the last digit of a given
 * number(s)
 * Description - display the last integer
 * @n: n is the parameter and its an integer
 * Return: 0 when successfull
 */
int print_last_digit(int n)
{
	int last_number = n % 10;

	if (n < 0)
	{
		last_number = last_number * -1;
	}
	_putchar(last_number + '0');
	return (last_number);
}
