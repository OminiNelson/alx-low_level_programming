#include <stdio.h>
#include <stdlib.h>

/**
 * main - display a - z
 * Return: 0 if there is no hikky
 */
int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		putchar(az);
	}
	putchar('\n');
	return (0);
}
