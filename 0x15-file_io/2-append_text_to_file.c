#include "main.h"

/**
 * _strlen - return the lenght of a string
 *
 * @s: the string whose lenght to check
 *
 * Return: integer lenght of string
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * append_text_to_file - appends text to a file
 *
 * @filename: name of a file to append the text
 * @text_content: text to write
 *
 * Return: 1 on success 0 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(tsxt_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
