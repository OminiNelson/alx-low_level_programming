#include "main.h"

/**
 * rev_string - reverses the position of char in string
 * @s: pointer to a string
 *
 *Return: void
 */
void rev_string(char *s)
{
	int x = 0;
	int y = 0;
	char tmp[500];

	while (*(s + x))
	{
		*(tmp + x) = *(s + x);
		x++;
	}
	x = x - 1;
	while (x >= 0)
	{
		*(s + x) = *(tmp + y);
		y++;
		x++;
	}
}
