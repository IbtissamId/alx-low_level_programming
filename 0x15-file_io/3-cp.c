#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buf(char *file);
void close_file(int x);

/**
 * create_buf - Allocates 1024 bytes for a buffer
 * @file: The name of the file
 * Return: pointer to the newly-allocated buffer
 */
char *create_buf(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - Closes file
 * @x: The file to be closed
 */
void close_file(int x)
{
	int cl;

	cl = close(x);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", x);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the arguments
 * Return: 0 on success
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(argv[2]);
	b = open(argv[1], O_RDONLY);
	i = read(b, buf, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (b == -1 || i == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		j = write(t, buf, i);
		if (t == -1 || j == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		i = read(b, buf, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);

	} while (i > 0);

	free(buf);
	close_file(b);
	close_file(t);

	return (0);
}
