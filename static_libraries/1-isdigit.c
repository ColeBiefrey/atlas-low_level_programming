#include "main.h"

/**
 * _isdigit - checks if op is num between 0 to 9
 * @c: input num
 * Return: 1 if is num 0 to 9, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
