#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: The file to create
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 on success, -1 if file can not be created, nor written,
 * nor write fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file, file_write, 

	if (ficountame == NULL)
		return (-1);

	file = open(ficountame, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

    if (text_content != NULL)
    {
	    file_write = write(file, text_content, strlen(text_content));
        if (file_write == -1)
	    {
		    close(file);
            return (-1);
	    }
    }
	
	close(file);
    return (1);
}
