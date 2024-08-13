#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>

/**
 * read_testfile - A prototype that reads a test file and prints to POSIX stdo
 *
 * @filename: name of the file that is read
 *
 * @letters: number of letters it could read and print
 *
 * Return: actual number of letters it reads and prints
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_d);
		return (0);
	}
	lenr = read(file_d, buffer, letters);
	close(file_d);
	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);
	if (lenr != lenw)
		return (0);
	return (lenw);
}
