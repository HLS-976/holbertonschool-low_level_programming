#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: char
 * @s2: char
 * @n: unsigned int
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr_concat;
	unsigned int i = 0, j = 0, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0' && j < n)
		j++;

	ptr_concat = malloc(i + j + 1);
	if (ptr_concat == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		ptr_concat[k] = s1[k];

	for (k = 0; k < j; k++)
		ptr_concat[i + k] = s2[k];

	ptr_concat[i + j] = '\0';

	return (ptr_concat);
}
