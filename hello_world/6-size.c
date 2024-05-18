#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("The size of a char: %lu byte(s)\n", sizeof(char));
	printf("The size of an int: %lu byte(s)\n", sizeof(int));
	printf("The size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("The size of a float: %lu byte(s)\n", sizeof(float));
	printf("The size of a double: %lu byte(s)\n", sizeof(double));
	printf("The size of a long double: %lu byte(s)\n", sizeof(long double));

	return (0);
}
