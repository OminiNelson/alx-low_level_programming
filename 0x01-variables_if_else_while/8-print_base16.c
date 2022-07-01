#include <stdio.h>
#include <stdlib.h>

/**
 * main - display all bbase 16
 * Return: 0 if there is no hikky
 */
int main(void)
{
	int num;
	char a;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	for (a = 'a'; a < 'g'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
