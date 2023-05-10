nclude "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *l = haystack;
	char *p = needle;


	for (; *haystack != '\0; haystack++)
	{
	while (*l == *p && *p != '\0')
	{
		i++;
		p++;
	}
	if (*p == '\0')
		return (haystack);
	}
	return (0)
}
