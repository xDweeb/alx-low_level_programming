#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the mininum number of coins to make change
 * for an amount of money.
 * @argc: Number of arguments passed.
 * @argv: Array of pointers
 *
 * Return: 0 (Success), 1 (Error).
 */
int main(int argc, char *argv[])
{
	int change[5] = {25, 10, 5, 2, 1};
	int i, count, num;

	count = 0;
	i = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= change[i])
		{
			num -= change[i];
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
