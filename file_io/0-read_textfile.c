#include "main.h"


/**
 * read_textfile - read and print a text file contect.
 * @filename: string with file name.
 * @letters: numbers of letters to read and print.
 *
 * Return: letters that could read and write.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t text, output;
	char *buf = NULL;
	int file;

	if (!(filename && letters))
		return (0);

	buf = malloc(sizeof(char) * letters);


	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buf);
		return (0);
	}
	text = read(file, buf, letters);

	output = write(STDOUT_FILENO, buf, text);
	free(buf);

	close(file);

	return (output);

}
