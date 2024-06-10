#include <stdio.h>

/**
 * main - prints the num of arguments to pass
 * @argc: num of line arguments
 * @argv: array that contains arguments
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))

{
	printf("%d\n", argc - 1);
	return (0);
}

