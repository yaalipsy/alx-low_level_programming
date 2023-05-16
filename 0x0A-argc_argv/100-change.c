#include<stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coin to
 * make change for a an amount of money
 * @argc: number of arguments
 * @argv: array of arguements
 * Return: 0 (success), 1 (error)
 */
int main(int argc, char *argv[])
{
	int i, j, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("error\n");
		return (1);
	}
	i = atoi(argv[1]);
	result = 0;

	if (i < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && i >= 0; j++)
	{
		while (i >= coins[j])
		{
			result++;
			i -= coins[j];
		}
	}
	printf("%d\n", result);
	return (0);
}
