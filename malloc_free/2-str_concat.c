#include <stdlib.h>

/**
 * str_concat - concatenates two string using malloc
 * @s1: char
 * @s2: char
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	char  *ptr_concat = NULL;
	int i, j, k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	for (j = 0; s2[j] != '\0'; j++)

	ptr_concat = malloc(sizeof(char) * (i + j));

	if (ptr_concat == NULL)
		return (NULL);

	else
	{
		for (k = 0; k < i; k++)
			ptr_concat[k] = s1[k];

		for (k = 0; k < j; k++)
			ptr_concat[i + k] = s2[k];

		ptr_concat[i + j] = '\0';
	}


	return (ptr_concat);
}
