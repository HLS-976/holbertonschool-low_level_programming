/**
 * _strcpy - copies the string sourrce to target
 * @dest: char pointer parameter 1
 * @src: char pointer parameter 2
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	while  (i <= len)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
