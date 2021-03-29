#include "holberton.h"
/**
 *append_text_to_file - appends text to a file
 *@filename: file to write into
 *@text_content: the text to write
 *Return: -1 on failure, 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opened, wrote, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	opened = open(filename, O_WRONLY | O_APPEND);
	wrote = write(opened, text_content, len);

	if (opened == -1 || wrote == -1)
		return (-1);

	close(opened);
	return (1);
}

