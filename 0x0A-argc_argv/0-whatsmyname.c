#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: Always 0 (Successful)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
