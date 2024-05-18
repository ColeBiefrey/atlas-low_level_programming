#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int longType;
	long long int longlongType;
	float floatType;

	printf("The size of a char: %zu byte(s)\n", sizeof(charType));
	printf("The size of an int: %zu byte(s)\n", sizeof(intType));
	printf("The size of a long int: %zu byte(s)\n", sizeof(longType));
	printf("The size of a long long int: %zu byte(s)\n", sizeof(longlongType));
	printf("The size of a float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
