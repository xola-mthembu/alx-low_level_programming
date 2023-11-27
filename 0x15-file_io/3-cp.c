#include "main.h"
/**
 * print_error - Print an error message to standard error.
 * @exit_code: The exit code.
 * @format: The format string for the error message.
 *
 * Return: void
 */
void print_error(int exit_code, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);
	va_end(args);

	exit(exit_code);
}
/**
 * main - Entry point for the program.
 * @ac: The number of command-line arguments.
 * @av: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, other values on failure.
 */
int main(int ac, char **av)
{
	int file_from, file_to, read_status, write_status;
	char buffer[1024];

	if (ac != 3)
		print_error(97, "Usage: %s file_from file_to\n", av[0]);

	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
		print_error(98, "Error: Can't read from file %s\n", av[1]);

	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		print_error(99, "Error: Can't write to %s\n", av[2]);

	while ((read_status = read(file_from, buffer, 1024)) > 0)
	{
		write_status = write(file_to, buffer, read_status);
		if (write_status == -1 || (size_t)write_status != (size_t)read_status)
			print_error(99, "Error: Can't write to %s\n", av[2]);
	}

	if (read_status == -1)
		print_error(98, "Error: Can't read from file %s\n", av[1]);

	if (close(file_from) == -1 || close(file_to) == -1)
		print_error(100, "Error: Can't close fd %d\n", (file_from == -1) ? file_to : file_from);

	return (0);
}
