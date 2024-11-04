/**
 * _memset - fill memory with constant byte
 * @s: char
 * @b: char
 * @n: unsigned int
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
