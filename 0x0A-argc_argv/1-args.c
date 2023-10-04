#include <stdio.h>

/**
 * main - prints number of arguments passed into it,
 * followed by a newline
 * @argc: Number of arguments
 * @argv: Arrays of pointers
 *
 * Return: Always 0 upon (Success).
 */
int main(int argc, char __attribute__((unused))**argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
