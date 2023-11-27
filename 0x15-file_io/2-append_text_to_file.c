#include "main.h"
/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to add to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_status, close_status;
	ssize_t text_length = 0;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_length] != '\0')
			text_length++;
		write_status = write(file_descriptor, text_content, text_length);
		if (write_status == -1 || write_status != text_length)
		{
			close_status = close(file_descriptor);
			return (close_status == -1 ? -1 : -1);
		}
	}

	close_status = close(file_descriptor);
	return (close_status == -1 ? -1 : 1);
}
