#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * @ac: represents the argument count, which is the number of arguments
 * @av: is an array of strings containing the actual arguments.
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	ssize_t n;

	if (ac != 2)
	{
		dprintf(2, "Usage: %s filename\n", av[0]);
		exit(1);
	}
	n = read_textfile(av[1], 114);
	printf("\n(printed chars: %li)\n", n);
	n = read_textfile(av[1], 1024);
	printf("\n(printed chars: %li)\n", n);
	return (0);
}
