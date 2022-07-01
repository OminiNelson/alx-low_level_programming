#include <stdio.h>
#include <stdlib.h>

/**
 * main - display 0 - 9
 * Return: 0 if there is no hikky
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	putchar('\n');
	return (0);
}
