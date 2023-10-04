#include <stdio.h>

/**
 * _atoi - converts string to integer
 * @s: String to convert
 *
 * Return: integer derived
 */
int _atoi(char *s)
{
	int i, flg, opr, digit, num;

	i = 0, flg = 0, opr = 0, digit = 0, num = 0;

	while (s[i] != '\0' && flg == 0)
	{
		if (s[i] == '-')
			++opr;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (opr % 2)
				digit = -digit;
			num = num * 10 + digit;
			flg = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			flg = 0;
		}
		i++;
	}
	if (flg == 0)
		return (0);
	return (num);
}

/**
 * main - adds two positive numbers
 * @argc: Number of arguments passed
 * @argv: Array of pointers
 *
 * Return: 0 (Success), 1 (Error).
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
				continue;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
		sum += _atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
}
