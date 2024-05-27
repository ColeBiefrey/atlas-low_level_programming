#include "main.h"
#include <stdio.h>

/**
 * print_array - prints parts of an int array
 * @a: input array
 * @n: input parts
 * Return: no return
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
