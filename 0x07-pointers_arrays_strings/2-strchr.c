#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string parameter
 * @c: the character to find in the string
 *
 * Return: pointer to the spot where c is or a null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
