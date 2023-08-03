#include "main.h"

/**
 * read_textfile - Exercise #0 function.
 *
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print
 *
 * Description: Reads a text file and prints it to the
 * POSIX standard output.
 *
 * Return: The number of read and printed letters.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_bytes, written_bytes;
	int close_return_value, number_of_bytes_to_read;
	int file_descriptor = open(filename, O_RDONLY);
	char *buffer;

	if (filename == NULL || file_descriptor == -1)
	{
		return (0);
	}

	number_of_bytes_to_read = letters * sizeof(char);
	buffer = malloc(number_of_bytes_to_read);
	read_bytes = read(file_descriptor, buffer, number_of_bytes_to_read);
	close_return_value = close(file_descriptor);

	if (close_return_value == -1)
	{
		return (0);
	}

	written_bytes = write(STDOUT_FILENO, buffer, strlen(buffer));

	if (written_bytes != read_bytes)
	{
		return (0);
	}

	return (written_bytes);
}
