#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Prints the multiplication of two args numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 if error, 0 if function runs correctly
 */
int main(int argc, char *argv[])
{
	(void) argc;

	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");

	return (1);
}

