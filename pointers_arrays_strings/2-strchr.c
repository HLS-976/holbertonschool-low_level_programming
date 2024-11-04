/**
 * _strchr - locates a character in a string
 * @s: char
 * @c: char
 * Return: char
 */

char *_strchr(char *s, char c)
{
	while (*s && *s != c)
	{
		s++;
	}

	if (*s == c)
	{
		return (s);
	}
	return ('\0');
}
