#include "main.h"

/**
 * _puts - this will print every character in a string
 * until it finds '\0'
 * @str: the parameter our program will take
 *
 *Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
