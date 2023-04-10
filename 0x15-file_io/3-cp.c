#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * error_file_check - checks file for opening
 * reading or writing.
 * @file_from: param1
 * @file_to: param2
 * @argv: argv
 *
 * Return: void
 */

void error_file_check(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - program that copies the content of a
 * file to another file.
 * @argc: arg1
 * @argv: arg2
 * Return:  0.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, err_no;
	ssize_t i, result_w;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file_check(file_from, file_to, argv);

	i = 1024;
	while (i == 1024)
	{
		i = read(file_from, buffer, 1024);
		if (i == -1)
			error_file_check(-1, 0, argv);
		result_w = write(file_to, buffer, i);
		if (result_w == -1)
			error_file_check(0, -1, argv);
	}

	err_no = close(file_from);
	if (err_no == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_no = close(file_to);
	if (err_no == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}

