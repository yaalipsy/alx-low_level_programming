#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints last digit of a randomly generated number
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int n;

	srand(time(0));
	if ((n % 10) > 5)
	{
		printf("last digits pf %D and is greater than 5\n", n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d and is less than 6 and not 0\n", n, n % 10);
	}
	else
	{
		printf("Last digit of %d and is %d and is 0\n", n, n % 10);
	}
	return (0);
}
