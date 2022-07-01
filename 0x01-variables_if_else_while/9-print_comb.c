#include <stdio.h>
#include <stdlib.h>

/**
 * main - display 0, 1, 2, 3,
 * 4, 5, 6, 7, 8, 9
 * Return: 0 if there is no hikky
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
