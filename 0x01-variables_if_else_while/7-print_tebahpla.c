#include <stdio.h>
#include <stdlib.h>

/**
 * main - display z - a
 * Return: 0 if there is no hikky
 */
int main(void)
{
	char za;

	for (za = 'z'; za >= 'a'; za--)
	{
		putchar(za);
	}
	putchar('\n');
	return (0);
}
