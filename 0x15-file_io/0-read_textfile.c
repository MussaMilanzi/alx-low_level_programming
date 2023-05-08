#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return:  the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fild;
	char *buffer;
	ssize_t num_read, num_write;

	if (!filename)
	{
		return (0);
	}
	fild = open(filename, O_RDONLY);
	if (fild == -1)
		return (0);
	buffer = (char *)  malloc(sizeof(char) * (letters + 1));
	if (!buffer)
	{
		close(fild);
		return (0);
	}
	num_read = read(fild, buffer, letters);
	if (num_read == -1)
	{
		free(buffer);
		close(fild);
		return (0);
	}
	buffer[num_read] = '\0';
	num_write = write(STDOUT_FILENO, buffer, num_read);
	if (num_write == -1 || num_write != num_read)
	{
		free(buffer);
		close(fild);
		return (0);
	}
	return (num_write);
}
