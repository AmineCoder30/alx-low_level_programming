#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: the name of the file.
 * @text_content: the content that must be writed.
 * Return: 1 ro -1.
 * amine mohamed
 */
int create_file(const char *filename, char *text_content)
{
	int ftoOpen;
	int numOfLetr;
	int radwr;

	if (!filename)
		return (-1);

	ftoOpen = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (ftoOpen == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (numOfLetr = 0; text_content[numOfLetr]; numOfLetr++)
		;

	radwr = write(ftoOpen, text_content, numOfLetr);

	if (radwr == -1)
		return (-1);

	close(ftoOpen);

	return (1);
}
