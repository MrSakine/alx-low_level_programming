/*
 * File: 3-cp.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

void close_file(int fd);
void print_error(char *text, char *str, char *buffer, int code);

/**
 * main - Copies the contents of a file to another file.
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success.
 * Description:
 * If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int ac, char **av)
{
	ssize_t op;
	ssize_t rd;
	ssize_t from;
	ssize_t to;
	char *buffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		print_error("Error: Can't write to", av[2], NULL, 99);
	from = open(av[1], O_RDONLY);
	to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	rd = read(from, buffer, 1024);

	while (rd > 0)
	{
		if (from == -1 || rd == -1)
			print_error("Error: Can't read from file", av[1], buffer, 98);

		op = write(to, buffer, rd);
		if (to == -1 || op == -1)
			print_error("Error: Can't write to", av[2], buffer, 99);

		rd = read(from, buffer, 1024);
		to = open(av[2], O_WRONLY | O_APPEND);
	}

	free(buffer);
	close_file(from);
	close_file(to);
	return (0);
}

/**
 * print_error - print exit code error
 * @text: first sentence
 * @str: last sentence, usually file name
 * @buffer: the current line, a buffer
 * @code: exit code
 *
 * Return: void.
 */
void print_error(char *text, char *str, char *buffer, int code)
{
	dprintf(STDERR_FILENO, "%s %s\n", text, str);
	if (buffer)
		free(buffer);

	exit(code);
}

/**
 * close_file - close a file
 * @fd: value of the file descriptor
 *
 * Return: void.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
