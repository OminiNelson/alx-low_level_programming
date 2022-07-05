#include "main.h"

/**
 * main - will prints _putchar
 *
 * Description - I will creat a variable that can store
 * my _putchar, then i'll use the for loop to iterate
 * through and print each character using their index to
 * note them.
 *
 * Return: 0 if the program runs successfully
 */
int main(void)
{
	char x[8] = "_putchar";
	int i;

	for (i = 0; i <= 8; i++)
	{
		_putchar(x[i]);
	}
	_putchar('\n');
	return (0);
}
