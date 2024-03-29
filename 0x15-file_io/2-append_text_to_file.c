#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: string to add to the end of the file
 * Return: -1 if the function fails or filename is NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, i, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	i = write(o, text_content, l);

	if (o == -1 || i == -1)
		return (-1);

	close(o);

	return (1);
}
