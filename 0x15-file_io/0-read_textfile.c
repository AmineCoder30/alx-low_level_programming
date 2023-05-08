#include "main.h"

/**
 * read_textfile - function that reads and prints
 * the letters of a text file
 * @filename: the name of file.
 * @letters: the number of letters to read and print.
 * Return: numbers of letters that will be printed.
 * amine mohamed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ftoOpen;
	ssize_t drn, r_w_n;
	char *buffer;

	if (!filename)
		return (0);

	ftoOpen = open(filename, O_RDONLY);

	if (ftoOpen == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	drn = read(ftoOpen, buffer, letters);
	r_w_n = write(STDOUT_FILENO, buffer, drn);

	close(ftoOpen);

	free(buffer);

	return (r_w_n);
}
