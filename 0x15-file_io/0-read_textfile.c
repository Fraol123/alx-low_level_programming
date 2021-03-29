#include "holberton.h"

/**
 *read_textfile- Reads a text file and prints it to POSIX stdout.
 *@filename: A ptr to the name of the file
 *@letters: The number of letters the function should read and print
 *Return: if filename is NULL return 0
 *          - if write fails or does not write
 *          the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opened, wrote, reading;
	char *buffer;

	if (filename == NULL)
		return (0);
	opened = open(filename, O_RDONLY);
	if (opened == -1)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	reading = read(opened, buffer, letters);
	if (reading == -1)
		return (0);
	wrote = write(STDOUT_FILENO, buffer, reading);
	if (wrote == -1 || wrote != reading)
		return (0);
	close(opened);
	free(buffer);
	return (wrote);
}
