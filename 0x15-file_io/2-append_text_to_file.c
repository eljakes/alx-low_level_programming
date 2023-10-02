#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
* append_text_to_file - Appends text to the end of a file.
* @filename: Name of the file.
* @text_content: Text to add to the file.
*
* Return: 1 on success, -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, fdw = 0, count = 0;

	if (filename == NULL)
		return (-1);

	/* Open the file in read-write mode, append to it */
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1); /* No content to append, return success */
	}

	while (text_content[count] != '\0')
		count++;

	/* Write the text content to the end of the file */
	fdw = write(fd, text_content, count);
	if (fdw == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
