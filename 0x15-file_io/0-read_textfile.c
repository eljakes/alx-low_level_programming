#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>

/**
* read_textfile - Reads a text file and prints it to the POSIX standard output.
* @filename: Name of the file to read.
* @letters: Number of letters to read and print.
*
* Return: The actual number of letters read and printed. If an error occurs,
* return -1.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0, fdr = 0, fdw = 0;
	char *buf = NULL;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (-1);
	}

	fdr = read(fd, buf, letters);
	if (fdr == -1)
	{
		free(buf);
		close(fd);
		return (-1);
	}

	fdw = write(STDOUT_FILENO, buf, fdr);
	if (fdw == -1 || fdw != fdr)
	{
		free(buf);
		close(fd);
		return (-1);
	}

	free(buf);
	close(fd);
	return (fdr);
}
