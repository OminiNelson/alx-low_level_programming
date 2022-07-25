#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - writes a copy of a string parameter to a new memmory space
 * @str: string parameter
 *
 * Return: pointer to new stringif successfull else NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *newstr = NULL;
	unsigned int i;
	int size;

	/* set fallback for  NULL */
	if (str == NULL)
	{
		return (NULL);
	}
	/* set fall back for 0 */
	for (size = 0; str[size] != '\0'; size++)
	{
		;
	}
	newstr = (char *)malloc(size + 1 * sizeof(char));

	if (newstr != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			newstr[i] = str[i];
	} else
	{
		return (NULL);
	}
	newstr[i] = '\0';
	return (newstr);
}
