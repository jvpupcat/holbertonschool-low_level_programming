#include "holberton.h"
#define BUFSIZE 1204

/**
 * main - main function
 * @argc: argument count
 * @argv: argument variable
 * Return: 0 upon success, error messages, if erros exist
 **/
int main(int argc, char **argv)
{
	int file1open, file1read, file1write, file2open, file1close, file2close;
	mode_t mode;
	char buffer[BUFSIZE];

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file1open = open(argv[1], O_RDONLY);
	if (file1open == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	file2open = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (file2open == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]), exit(99);
	file1read = read(file1open, buffer, BUFSIZE);
	if (file1read == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	while (file1read > 0)
	{
		file1write = write(file2open, buffer, file1read);
		if (file1write == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(100);
		file1read = read(file1open, buffer, BUFSIZE);
		if (file1read == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	file1close = close(file1open);
	if (file1close == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", "file1open"), exit(100);
	file2close = close(file2open);
	if (file2close == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", "file1open"), exit(100);
	return (0);
}
