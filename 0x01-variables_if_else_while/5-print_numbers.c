#include <stdio.h>

/**
 * main - prints all single digit numbers up to 10
 * starting from 0, followed ny a new line
 * Return: 0 success
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	printf('\n');
	return (0);
}
