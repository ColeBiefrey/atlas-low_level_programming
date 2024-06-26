#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of ints
 * @min: min value
 * @max: max value
 * Return: pointer to new array
 * if man > mix return NULL
 * if malloc fails return NULL
 */

int *array_range(int min, int max)

{
	int *ar;
	int i;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ar[i] = min;

	return (ar);
}
