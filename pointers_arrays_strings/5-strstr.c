/**
 * _strstr - locates a substring
 * @haystack: char
 * @needle: char
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
