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
			char *h = haystack;
			char *n = needle;

			while (*h != '\0' && *n != '\0' && *h == *n)
			{
				h++;
				n++;
			}

			if (*n == '\0')
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return (0);
}
