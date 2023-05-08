#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file.
 * @text_content: content that must be added.
 * Return: 1 or -1.
 * amine mohamed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filetoOpen;
	int numOletr;
	int radwr;

	if (!filename)
		return (-1);

	filetoOpen = open(filename, O_WRONLY | O_APPEND);

	if (filetoOpen == -1)
		return (-1);

	if (text_content)
	{
		for (numOletr = 0; text_content[numOletr]; numOletr++)
			;

		radwr = write(filetoOpen, text_content, numOletr);

		if (radwr == -1)
			return (-1);
	}

	close(filetoOpen);

	return (1);
}
