#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters written. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_name;
	ssize_t Read, Write;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_name = open(filename, O_RDONLY);

	if (file_name == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	Read = read(file_name, buffer, letters);
	if (Read == -1)
	{
		free(buffer);
		close(file_name);
		return (0);
	}
	
	Write = write(STDOUT_FILENO, buffer, Read);
	if (Write == -1)
	{
		free(buffer);
		close(file_name);
		return (0);
	}
	
	close(file_name);

	return (Write);
}
