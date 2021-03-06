#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars,
 * initializes it with a specific char
 * @size: size of array
 * @c: array initializer
 *
 * Return: pointer to array or NULL if size is 0.
 */
char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	/* set size of array */
	if (size != 0)
	{
		array = (char *) malloc(size * sizeof(char));
		/* set content of array */
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
				array[i] = c;
		}
	}

	return (array);
}
