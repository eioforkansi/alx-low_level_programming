#include "main.h"
/**
  *read_textfile - Function that reads a file
  *@filename: File to be read
  *@letters: Number of bytes to be printed
  *
  *Return: Number of byte written to STDOUT
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t byte_read;
	char buffer[1024];
	ssize_t byte_write;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		perror("Error opening file");
		return (0);
	}

	byte_read = read(fd, buffer, letters);

	if (byte_read == -1)
	{
		perror("Error reading file");
		close(fd);
		return (0);
	}

	buffer[byte_read] = '\0';

	byte_write = write(STDOUT_FILENO, buffer, byte_read);

	if (byte_write != byte_read)
	{
		perror("Error writing to the standard output");
		close(fd);
		return (0);
	}

	close(fd);
	return (byte_read);
}
