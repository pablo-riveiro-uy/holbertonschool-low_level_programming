#include "main.h"


/**
 * create_file - ceates a file.
 * @filename: string with file name.
 * @text_content: string with content
 *
 * Return: 1 on success -1 on fail.
 */

int create_file(const char *filename, char *text_content)
{
	int len = 0;
	ssize_t file, output;

	if (!filename || !text_content)
		return (-1);
	if (text_content == NULL)
		return (-1);
	if (text_content != NULL)
	{

	while (text_content[len])
		len++;
	}

	if (len == 0 || !len)
		return (-1);


	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	output = write(file, text_content, len);
	if (output == -1)
		return (-1);
	if (file == -1 || output == -1)
		return (-1);

	close(file);

	return (1);

}
