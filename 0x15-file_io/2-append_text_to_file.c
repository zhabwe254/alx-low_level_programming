#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the target file.
 * @text_content: The content to be added.
 *
 * Return: 1 if the file exists, -1 if nonexistent or if the operation fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(fd, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
