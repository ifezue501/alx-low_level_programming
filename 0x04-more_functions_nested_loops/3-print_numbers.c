#include "main"

/**
 * print_numbers - Print the numbers since 0 up to 9
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}
	-putchar('\n');
}
