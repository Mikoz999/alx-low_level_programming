#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * main - Copies the content of a file to another file.
 *
 * @argc: Number of arguments.
 * @argv: Array of argument strings.
 *
 * Return: 0 on success, or exit with error codes:
 *         97 - Incorrect number of arguments
 *         98 - Cannot read from file_from
 *         99 - Cannot write to file_to
 *         100 - Cannot close file descriptors
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_chars, write_chars;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		exit(99);
	}

	while ((read_chars = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		write_chars = write(fd_to, buffer, read_chars);
		if (write_chars == -1 || write_chars != read_chars)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	close(fd_from);
	close(fd_to);
	return (0);
}

