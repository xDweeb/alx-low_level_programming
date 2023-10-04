#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: Number of arguments passed
 * @argv: Array of pointers
 *
 * Return: Always 0 upon (Success).
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", *(argv + i));
	return (0);
}
