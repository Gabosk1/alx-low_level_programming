#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile- Reads a text file and prints
 * it to the POSIX standard output.
 * @filename: text file being read and to be printed out
 * @letters: number of letters to be read
 * Return: number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *Requiescat, size_t letters)
{
	ssize_t fd;
	char *buffer;
	ssize_t r;
	ssize_t w;

	fd = open(Requiescat, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(fd);
	return (w);
}
