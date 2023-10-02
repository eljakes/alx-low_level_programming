#include "main.h"
#include <stddef.h>

/**
* main - Copies the contents of one file to another.
* @argc: The number of command-line arguments.
* @argv: An array of command-line argument strings.
*
* Return: 0 on success, or an error code on failure.
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	if (copy_file(argv[1], argv[2]) == 0)
		return (0);
	else
		return (1);
}

/**
* copy_file - Copies the contents of one file to another.
* @src_path: The path to the source file.
* @dest_path: The path to the destination file.
*
* Return: 0 on success, or -1 on failure.
*/
int copy_file(const char *src_path, const char *dest_path)
{
	int src_fd, dest_fd;
	int _read, _write;
	char buffer[1024];

	src_fd = open(src_path, O_RDONLY);
	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_path);
		return (-1);
	}

	dest_fd = open(dest_path, O_TRUNC | O_CREAT | O_WRONLY, 0664);
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_path);
		close(src_fd);
		return (-1);
	}

	while ((_read = read(src_fd, buffer, 1024)) > 0)
	{
		_write = write(dest_fd, buffer, _read);
		if (_write != _read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_path);
			close(src_fd);
			close(dest_fd);
			return (-1);
		}
	}

	if (_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_path);
		close(src_fd);
		close(dest_fd);
		return (-1);
	}

	close(src_fd);
	close(dest_fd);
	return (0);
}

