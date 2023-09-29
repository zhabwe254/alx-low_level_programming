#include <stdio.h>

/**
 * main - prints the number of arguments passed to the program
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 if successful
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
