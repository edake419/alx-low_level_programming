#include "main.h"

int comp_close(int);
/**
 * main - Main function to copy files
 * @argc: The number of passed arguments
 * @argv: a pointer point  to array arguments
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int bytes_read = 0, _EOF = 1, fd_from = -1, fd_to = -1, error = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		exit(99);
	}

	while (_EOF)
	{
		_EOF = read(fd_from, buffer, 1024);
		if (_EOF == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close(fd_from);
			close(fd_to);
			exit(98);
		}
		else if (_EOF == 0)
			break;
		bytes_read += _EOF;
		error = write(fd_to, buffer, _EOF);
		if (error == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	error = close(fd_to);
	if (error == -1)
	{
		close(fd_from);
		exit(100);
	}
	error = comp_close(fd_from);
	if (error == -1)
		exit(100);
	return (0);
}
