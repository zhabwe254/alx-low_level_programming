#include "main.h"
#include <stdio.h>

/**
 * _strcat - concat 2 string
 * @dest:char
 * @src:char
 * Return:char
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
	ptr++;
	}

	while (*src != '\0')
	{*ptr = *src;
	ptr++;
	src++;
	}

	*ptr = '\0';
	return (dest);
}

int main(void)
{
	char str1[50] = "Hello";
	char str2[] = " world!";

	printf("%s\n", _strcat(str1, str2));
	return (0);
}

