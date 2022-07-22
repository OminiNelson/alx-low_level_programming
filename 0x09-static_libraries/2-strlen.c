#include "main.h"

/**
 * _strlen - this will count the number of characyers
 * in a string
 * @s: is the parameter that this function will take
 *
 *Return: int i which is the lenght of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
