/**
 * _memcpy - copies memory area
 * @dest: char
 * @src: char
 * @n: unsiggned int
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
