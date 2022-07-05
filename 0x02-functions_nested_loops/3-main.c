#include "main.h"

/**
 * main - check if code is correct
 *
 * Return: Always 0 when successfull
 */
int main(void)
{
	int r;
	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
