#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two num
 * @argc: num of arguments
 * @argv: array that contains arguments
 * Return: 0
 */

int main(int argc, char *argv[])

{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

