#include <Stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Prints the last digits of a randomly generated number
 * and whether it is greater than 5, less than 6, or equall 0.
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n" n, n % 10);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n % 10);
	}
	printf("Last digit of %d is %d and is 0\n", n % 10);
	}
	return (0);
}
