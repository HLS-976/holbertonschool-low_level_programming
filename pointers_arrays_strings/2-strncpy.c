/**
 * _strncpy - copy the tring with n byte
 * @dest: param 1
 * @src: parma 2
 * @n: param 3
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while  (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
