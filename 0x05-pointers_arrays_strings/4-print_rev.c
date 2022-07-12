#include "main.h"

/**
 * print_rev - this function will print a string in reverse
 * @s: is a string parameter
 *
 *Return: void
 */
void print_rev(char *s)
{
	int tmp = 0;

	while (s[tmp] != 0)
	{
		tmp++;
	}
	while (tmp > 0)
	{
		tmp--;
		_putchar(s[tmp]);
	}
	_putchar('\n');
}
