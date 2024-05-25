#include "main.h"

/**
 * _isupper - Check if letter is uppercase
 * @x: The number to check
 * Return: 1 for uppercase or 0 for other
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
