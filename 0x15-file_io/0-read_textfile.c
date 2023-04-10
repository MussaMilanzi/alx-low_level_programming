#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: name of file
 * @letters: num of letters in a file
 * Return: num of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fild;
	char *buf;
	ssize_t result_r, result_w;

	fild = open(filename, O_RDONLY);

	if (filename == NULL)
	{
		return (0);
	}
	/**
	 * allocating block of memorty to pointer var buf
	 * which takes string of letters plus a null '\0'
	 */
	buf = (char *) malloc(sizeof(char) * (letters + 1));

	if (buf == NULL)
	{
		close(fild);
		return (0);
	}

	result_r = read(fild, buf, letters);
	if (fild && result_r == -1)
		return (0);

	buf[result_r] = '\0';

	result_w = write(STDOUT_FILENO, buf, result_r);
	if (result_w == -1 || result_w != result_r)
	{
		return (0);
	}

	free(buf);
	close(fild);

	return (result_w);
}


