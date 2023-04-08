#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it....
 * to the POSIX standard output
 * @letters: number of letters that needs to read and print
 * @filename: filename to be executed.
 * definitio: if filename is NULL || if write fails or does not
 * if the file can not be opened or read, return 0
 * Return: if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));

	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);
	free(buf);

	return (nwr);
}
