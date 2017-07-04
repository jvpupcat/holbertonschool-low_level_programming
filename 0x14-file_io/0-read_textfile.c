#include "holberton.h"

/**
 * read_textfile - function that reads a text file and prints to std output
 * @filename: name of the file
 * @letters: letters that need to be malloc'd for
 * Return: 1
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t store_open, store_read, store_write;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	store_open = open(filename, O_RDONLY);
	if (store_open == -1)
		return (0);
	store_read = read(store_open, buffer, letters);
	if (store_read == -1)
		return (0);
	store_write = write(STDOUT_FILENO, buffer, store_read);
	if (store_write == -1)
		return (0);
	free(buffer);
	close(store_open);
	return (store_write);
}
