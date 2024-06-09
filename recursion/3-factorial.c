#include "main.h"

/**
 * factorial - returns factorial of number
 * @n: input num
 * Return: factorial of num
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
