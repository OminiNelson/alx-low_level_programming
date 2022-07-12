#include "main.h"

/**
 * rev_string - reverses the position of char in string
 * @s: pointer to a string
 *
 *Return: void
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char tmp[500];

	while (*(s + i))
	{
		*(tmp + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(tmp + j);
		j++;
		i--;
	}
}
