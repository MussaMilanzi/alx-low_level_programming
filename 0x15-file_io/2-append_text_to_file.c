#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text at
 * the end of a file
 * @filename: name of the file
 * @text_content: texts
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fild;
	int count;
	int result_w;

	if (filename == NULL)
		return (-1);

	fild = open(filename, O_WRONLY | O_APPEND);

	if (fild == -1)
		return (-1);

	if (text_content)
	{
		count = 0;

		while (text_content[count])
		{
			count++;
		}

		result_w = write(fild, text_content, count);

		if (result_w == -1)
			return (-1);
	}

	close(fild);

	return (1);
}
