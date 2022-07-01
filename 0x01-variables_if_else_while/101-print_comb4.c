#include <stdio.h>

/**
  * main - prints all possible different
  * combinations of three digits.
  * separates them with a comma
  *
  * Return: 0 if theres no hikky or probs
  */
int main(void)
{
	int i, j, k;

	for (i = 48; i < 58; i++)
		for (j = i; j < 58; j++)
			for (k = j; k < 58; k++)
			{
					if (i == j || j == k || i == k)
						continue;
					putchar(i);
					putchar(j);
					putchar(k);

					if (i == 55 && j == 56 && k == 57)
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
			}
	putchar('\n');
	return (0);
}
