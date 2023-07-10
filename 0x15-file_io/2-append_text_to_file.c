#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 *
 * @filename: Name of the file.
 * @text_content: NULL-terminated string to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, written_chars, i = 0;

	if (filename == NULL)
		return (-1);

	/* Open the file in append mode */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		/* Determine the length of the text content */
		while (text_content[i])
			i++;

		/* Write the text content to the file */
		written_chars = write(fd, text_content, i);
		if (written_chars == -1 || written_chars != i)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

