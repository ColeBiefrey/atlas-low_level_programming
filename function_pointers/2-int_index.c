#include "function_pointers.h"

/**
 * int_index - searche for int
 * @array: input int array
 * @size: size of array
 * @cmp: pointer to function to use
 * to compare values
 * Return: index of element for which the cmp
 * function does not return 0. If no elements matches
 * return -1. If size <= 0, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
