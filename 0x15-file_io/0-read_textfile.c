#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function that reads a text file and
 * prints it to the standard output
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: number of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t x;
	ssize_t m;
	ssize_t j;

	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	j = read(x, b, letters);
	m = write(STDOUT_FILENO, b, j);

	free(b);
	close(x);
	return (m);
}
