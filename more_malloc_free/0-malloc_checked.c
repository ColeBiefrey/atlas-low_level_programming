#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates mem
 * @b: amount of bytes
 * Return: pointer to allocated mem.
 * if malloc fail status value equal to 98
 */

void *malloc_checked(unsigned int b)

{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
