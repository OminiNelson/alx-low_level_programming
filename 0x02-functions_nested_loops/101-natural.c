#include <stdio.h>

/**
 * main - prints all multiple of 3 or 5
 * under 1024
 *
 *Return: 0 for success
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
