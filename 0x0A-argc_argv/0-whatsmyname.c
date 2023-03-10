#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc __attribute__((__unused__)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
