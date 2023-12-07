#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters.
 *
 * Return: If the function fails or filename is NULL - 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	void *buf;
	ssize_t nrd, nwr;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		close(fd);
		return (0);
	}

	buf = malloc(sizeof(char) * (letters));

	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);
	{
		if (nwr == -1)
		{	free(buf);
			close(nrd);
			return (0);
		}
	}
	close(fd);

	free(buf);

	return (nwr);
}
