#include <stdio.h>

/**
 * main - prints its name, followed by a newline
 * @agrc: Number arguments passed
 * @argv: Array of pointers
 *
 * Return: Always 0 upon (Success).
 */
int main(int __attribute__ ((unused))agrc, char *argv[])
{
	printf("%s\n", *argv + 0);
	return (0);
}
