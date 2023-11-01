#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stddef.h>

ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);


int _putchar(char c);
void close_error(int fd);
void read_error(char *file);
void write_error(char *file);
void cp_error(int error, char *file);
int main(int ac, char **av);

#endif /* MAIN_H */
