#include "main.h"

/**
 * print_alphabet_x10 - print alphabet a to z in lower case
 * in 10 places
 *
 * Description - i used a while to ensure it prints 10 times
 * and then i used the for loop to print a-z
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alph = 'a';
	int x = 0;

	while (x < 10)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		x++;
		_putchar('\n');
	}
}
