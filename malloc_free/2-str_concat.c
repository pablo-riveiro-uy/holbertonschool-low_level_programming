#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concat two strings in alloc mem
 *
 * Return: pointer with concat NULLfor some is empty or failure
 * @s1: first string
 * @s2: second string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0,
		     j = 0,
		     len1 = 0,
		     len2 = 0;
	char *concatString;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	concatString = malloc(sizeof(char) * len1 + len2 + 1);

	if (concatString == NULL)
		return (NULL);

	while (i < len1)
	{
		concatString[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		concatString[i] = s2[j];
		i++;
		j++;
	}


	return (concatString);
}
