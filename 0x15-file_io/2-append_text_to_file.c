#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * standard output.
 * @filename: Name of the file to append.
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int File_name, Write, length = 0;

	if (filename == NULL)
		return (-1);
	
	if (text_content != NULL)
	{
		File_name = open(filename, O_WRONLY | O_APPEND);
		if (File_name == -1)
			return (-1);
		
		
		while (*(text_content + length) != '\0')
			length++;

		Write = write(File_name, text_content, length);
		if (Write == -1)
		{
			close(File_name);
			return (-1);
		}
	}
	close(File_name);
	return (1);
}
