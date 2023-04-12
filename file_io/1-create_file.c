#include "main.h"


/**
 * create_file - ceates a file.
 * @ilename: string with file name.
 * @text_content: string with content
 *
 * Return: 1 on success -1 on fail.
 */

int create_file(const char *filename, char *text_content)
{	
	char *buf = NULL;
	int len = 0;	
	ssize_t file, output;

	if (!filename)
		return (-1);
	
	while(text_content[len])
		len++;

	buf = malloc(sizeof(char) * len);

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file == -1)
	{
		free(buf);
		return (-1);
	}

	output = write(*filename, buf, *text_content);
	if (!output)
		return (-1);

	free(buf);

	close(file);

	return (1);

}
