#include <stdio.h>
#include <stdlib.h>

/**
 * main - display a - z except e and q
 * Return: 0 if there is no hikky
 */
int main(void)
{
	char az;

	az = 'a';
	while (az <= 'z')
	{
		if (az != 'e' && az != 'q')
		{
			putchar(az);
		}
		az++;
	}
	putchar('\n');
	return (0);
}
