#include "main.h"

/**
 * set_bit - sets the value of bit to 1
 * at given index.
 * @n: pointer of unsigned long int
 * @index: index of bit
 * Return: 1 if it worked -1 if it failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
