#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int num, r = 0;

	if (str == NULL)
		return (NULL);
	num = 0;
	while (str[num] != '\0')
		num++;
	aaa = malloc(sizeof(char) * (num + 1));
	if (aaa == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		aaa[r] = str[r];
	return (aaa);
}
