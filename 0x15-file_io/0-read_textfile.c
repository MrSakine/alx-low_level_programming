/*
 * File: 0-read_textfile.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * read_textfile - converts a binary number to an unsigned int
 * @filename: file name in string
 * @letters: number of letters it should read and print
 *
 * Return: if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 * Otherwise, the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op;
	ssize_t rd;
	ssize_t wr;
	char *s;

	if (filename == NULL)
		return (0);

	s = malloc(sizeof(char) * letters);
	if (s == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, s, letters);
	wr = write(STDOUT_FILENO, s, rd);

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(s);
		return (0);
	}

	free(s);
	close(op);

	return (wr);
}

