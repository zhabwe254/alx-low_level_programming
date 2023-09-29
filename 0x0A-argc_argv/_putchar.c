#include <stdio>
#include "main.h"

/**
 * _putchar - writes c to stdio
 * @c: character to prin
 *
 * Return: On success 1
 * On error: -1
 */

int _putchar(char c)

	return (write(1, &c, 1));
}
