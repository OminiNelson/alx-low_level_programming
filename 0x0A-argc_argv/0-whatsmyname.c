#include <stdio.h>
/**
 * main - prints program name, even if the name is changed
 * print the new name without compiling again
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	/* or used (void)argc; */
	return (0);
}
