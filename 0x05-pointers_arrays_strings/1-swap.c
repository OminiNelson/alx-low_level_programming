#include "main.h"

/**
 * swap_int - take two variables and swap their values
 *@a: is the first integer value
 *@b: is the second integer value
 *
 *Return: void(which mean nothing)
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
