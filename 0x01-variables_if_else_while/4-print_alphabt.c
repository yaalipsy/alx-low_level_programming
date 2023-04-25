#include <stdio.h>


/**
 * main - Prints the alphabets in lower case and
 * followed by a new line , except q and e
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar("\n');
	return (0);
}
