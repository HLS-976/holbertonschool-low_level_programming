/**
 * _strncpy - copy the tring with n byte
 * @dest: param 1
 * @src: parma 2
 * @n: param 3
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;
	int i = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	while  (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
