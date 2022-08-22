#include "main.h"

/**
 * read_textfile - reads and prints textfile to the std output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters printed
 * or 0 if it failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int s, t;
	char *b;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	b = malloc(sizeof(char) * letters);
	if (!b)
		return (0);

	s = read(fd, b, letters);
	if (s < 0)
	{
		free(b);
		return (0);
	}
	b[s] = '\0';

	close(fd);

	t = write(STDOUT_FILENO, b, s);
	if (t < 0)
	{
		free(b);
		return (0);
	}

	free(b);
	return (t);
}
