#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 * @ac: arguments counter
 * @av: vector of arguments
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	char *buff[1024];
	ssize_t fo, foLen, fd, cp;

	if (ac < 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fo = open(av[1], O_RDONLY);

	if (fo == -1 || fo == 0 || !fo)
	{
		close(fo);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	}
	foLen = read(fo, buff,  1024);
	if (fo > foLen)
	{
		close(fo);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	if (foLen == -1 || foLen == 0)
	{
		close(fo);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	}
	fd = open(av[2], O_CREAT | O_RDWR | O_TRUNC, 664);

	if (fd == -1)
	{
		close(fd);
		dprintf(STDERR_FILENO, "Error: Can't write to file %ld\n", fd), exit(99);
	}
	cp = write(fd, buff, foLen);
	if (cp == -1)
	{
		close(fd);
		dprintf(STDERR_FILENO, "Error: Can't write to file %ld\n", fd), exit(99);
	}
	if (close(fo) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", fo), exit(100);
	if (close(fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", fd), exit(100);
	return (0);
}
