#include <stdio.h>

/**
 * main - prints name
 * @argc: num of command arguments
 * @argv: array that contains arguments
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	print("%s\n", argv[0]);
	return (0);
}

