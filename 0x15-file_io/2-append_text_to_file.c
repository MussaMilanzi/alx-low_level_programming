#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fild, letters, num_write;

	letters = 0;

	if (filename == NULL)
		return (-1);
	fild = open(filename, O_WRONLY | O_APPEND);
	if (fild == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	while (text_content[letters])
	{
		letters++;
	}
	num_write = write(fild, text_content, letters);
	if (num_write == -1)
		return (-1);
	close(fild);
	return (1);
}
