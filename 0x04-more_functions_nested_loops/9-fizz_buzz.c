#include "main.h"
#include <stdio.h>

/**
 * main - prints Fizz for 3 and Buzz for 5
 * Print fizzbuzz for 15
 *
 * Return: 0 if there is no hikky
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 15 == 0)
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%d", n);

		if (n != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
