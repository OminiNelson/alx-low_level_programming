#include <stdio.h>
#include <stdlib.h>

/**
 * main - display a - z
 * Return: 0 if there is no hikky
 */
int main(void)
{
	char az;
	char AZ;

	for (az = 'a'; az <= 'z'; az++)
	{
		putchar(az);
	}
	for (AZ = 'A'; AZ <= 'Z'; AZ++)
	{
		putchar(AZ);
	}
	putchar('\n');
	return (0);
}
