#include "holberton.h"

/**
 * create_file - function that creates a file
 * @filename: name of file
 * @text_content: content of text
 * Return: 1 upon success, -1 upon failure
 **/
int create_file(const char *filename, char *text_content)
{
	int store_open, store_write;
	int length;

	if (filename == NULL)
		return (-1);
	store_open = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (store_open == -1)
		return (-1);
	if (text_content != NULL)
	{
		length = 0;
		while (text_content[length] != '\0')
			length++;
		store_write = write(store_open, text_content, length);
		if (store_write == -1)
			return (-1);
	}
	close(store_open);
	return (1);
}
