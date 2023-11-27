#include "main.h"
/**
 * handle_open_error - Handles errors during file opening
 * @file_from: The file descriptor of file_from
 * @file_to: The file descriptor of file_to
 * @name_from: The name of file_from
 * @name_to: The name of file_to
 */
void handle_open_error(int file_from, int file_to, char *name_from, char *name_to)
{
	if (file_from == -1)
		dprintf(2, "Error: Can't read from file %s\n", name_from);
	if (file_to == -1)
		dprintf(2, "Error: Can't write to %s\n", name_to);

	close(file_from);
	close(file_to);
	exit(file_from == -1 ? 98 : 99);
}
/**
 * handle_write_error - Handles errors during file writing
 * @file_from: The file descriptor of file_from
 * @file_to: The file descriptor of file_to
 */
void handle_write_error(int file_from, int file_to)
{
	dprintf(2, "Error: Can't write to file\n");
	close(file_from);
	close(file_to);
	exit(99);
}
/**
 * close_files - Closes file descriptors and exits on error
 * @file_from: The file descriptor of file_from
 * @file_to: The file descriptor of file_to
 */
void close_files(int file_from, int file_to)
{
	int close_from = close(file_from);
	int close_to = close(file_to);

	if (close_from == -1 || close_to == -1)
	{
		dprintf(2, "Error: Can't close file descriptor\n");
		exit(100);
	}
}
/**
 * main - Copies the content of a file to another file
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: 0 on success, otherwise exit codes as specified
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]), exit(97);

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (file_from == -1 || file_to == -1)
		handle_open_error(file_from, file_to, argv[1], argv[2]);

	do {
		bytes_read = read(file_from, buffer, sizeof(buffer));
		bytes_written = write(file_to, buffer, bytes_read);

		if (bytes_read == -1 || bytes_written == -1 || bytes_written != bytes_read)
			handle_write_error(file_from, file_to);

	} while (bytes_read > 0);

	close_files(file_from, file_to);

	return (0);
}
