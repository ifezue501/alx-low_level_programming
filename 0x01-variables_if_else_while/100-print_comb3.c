#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int a;
	int i = 0;

	for (a = 0; a < 90; a++)
	{
		putchar(a / 10 + '0');
		putchar(i + '0');
		if (a < 89)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
		if (i > 9)
		{
			i = 0;
		}
	}
	putchar('\n');
	return (0);
}
