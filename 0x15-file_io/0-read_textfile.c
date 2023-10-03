#include "main.h"

/**
 * read_textfile - read a text file and prints the result to the stdout
 * @filename: filename
 * @letters: numbers of letter expected to be read
 * Return: size of read string
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	/*Create a file descriptor*/
	int fd, file_written, file_read;
	char *buffer;

/*Open the file*/
	buffer = malloc(sizeof(char) * (letters + 1));
	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

/*read from file*/
	file_read = read(fd, (void *)buffer, letters);
	if (file_read == -1)
		return (0);

	buffer[file_read] = '\0';
	file_written = write(STDOUT_FILENO, buffer, file_read);

/*Close file*/
	free(buffer);
	close(fd);
	if (file_written != file_read)
		return (0);
	return (file_written);

}
