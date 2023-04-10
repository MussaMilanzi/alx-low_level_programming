#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: name of the file
 * @text_content: texts
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fild, i;
	int result_w;

	if (filename == NULL)
		return (-1);

	fild = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fild == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	i = 0;
	while (text_content[i])
	{
		i++;
	}

	result_w = write(fild, text_content, i);

	if (result_w == -1)
		return (-1);

	close(fild);

	return (1);
}
