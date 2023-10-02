#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
* create_file - Creates a file and writes text content to it.
* @filename: Name of the file to create.
* @text_content: Text to insert in the file.
*
* Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
	int fd = 0, fdw = 0, count = 0;

	if (filename == NULL)
		return (-1);

	/* Open the file in write-only mode, creat if it doesn't exist, truncate it */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[count] != '\0')
		count++;

	/* Write the text content to the file */
	fdw = write(fd, text_content, count);
	if (fdw == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
