#include "main.h"

/**
 * print_alphabet - print alphabet a to z in lower case
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alph = 'a';

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
