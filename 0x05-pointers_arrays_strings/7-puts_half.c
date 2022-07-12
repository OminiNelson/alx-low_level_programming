#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: the parameter our function will take
 * this will be a string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		i = i / 2;
	}
	else
	{
		i = (i + 1) / 2;
	}
	while (str[i] != '\0')
	{
		j = str[i];
		i++;
		_putchar(j);
	}
	_putchar('\n');
}
