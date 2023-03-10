#include <stdio.h>
#include <stdlib.h>

/**
 * print the name of the program
 * @argc: argument count
 * @argv[]: arguments
 * return: success
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (EXIT_SUCCESS);
}
