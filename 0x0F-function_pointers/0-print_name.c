#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string to be printed as name
 * @f: function
 *
 * Return: void or nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}
