#include <stdio.h>

/**
 * add - adds two numbers
 */

int add(int a, int b)
{
	return a + b;
}

/**
 * sub - subract two numbers
 */
int sub(int a, int b)
{
	return a - b;
}

/**
 * mul - multiplies two numbers
 */

int mul(int a, int b)
{
	return a * b;
}

/**
 * div - divides two numbers
 */

int div(int a, int b)
{
	return a / b;
}

/**
 * mod - finds the modulus of two numbers
 */

int mod(int a, int b)
{
	return a % b;
}

int main()
{
	int result;
	result = add(4, 5);
	print("The sum of two numbers is: %d", result);
}
