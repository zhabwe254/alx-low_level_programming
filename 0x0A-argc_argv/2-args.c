#include <stdio.h>

/**
 * main - prints all arguments passed to the program
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
