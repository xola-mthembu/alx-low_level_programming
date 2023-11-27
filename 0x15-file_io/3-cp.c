#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#define BUF_SIZE 1024
void close_file(int fd);
int open_source_file(const char *filename);
int open_dest_file(const char *filename);
void copy_content(int file_from, int file_to, const char *src, const char *dest);
/**
 * close_file - Closes a file descriptor and prints an error if it fails.
 * @fd: The file descriptor to close.
 */
void close_file(int fd)
{
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * open_source_file - Opens a file to read from.
 * @filename: The name of the file to open.
 *
 * Return: The file descriptor for the opened file.
 */
int open_source_file(const char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (fd);
}
/**
 * open_dest_file - Opens a file to write to, creating it if necessary.
 * @filename: The name of the file to open.
 *
 * Return: The file descriptor for the opened file.
 */
int open_dest_file(const char *filename)
{
	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (fd);
}
/**
 * copy_content - Reads content from one file and writes it to another.
 * @file_from: The file descriptor to read from.
 * @file_to: The file descriptor to write to.
 * @src: Source filename for error messages.
 * @dest: Destination filename for error messages.
 */
void copy_content(int file_from, int file_to, const char *src, const char *dest)
{
	int read_res, write_res;
	char buf[BUF_SIZE];

	while ((read_res = read(file_from, buf, BUF_SIZE)) > 0)
	{
		write_res = write(file_to, buf, read_res);
		if (write_res != read_res)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}

	if (read_res < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
}
/**
 * main - Copies the content of a file to another file.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open_source_file(argv[1]);
	file_to = open_dest_file(argv[2]);
	copy_content(file_from, file_to, argv[1], argv[2]);
	close_file(file_from);
	close_file(file_to);

	return (0);
}
