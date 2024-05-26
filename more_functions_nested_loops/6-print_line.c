#include "main.h"

/**
 * print_line - prints straight line num times
 * @n: times to print straight line
 * Return: No return
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
