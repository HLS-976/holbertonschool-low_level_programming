/**
 * _strcat - concatenate string
 * @dest: target
 * @src: source
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int src_len = 0;
	int i;

	while (*dest != '\0')
	{
		dest_len++;
		dest++;
	}

	while (*src != '\0')
	{
		src_len++;
		src++;
	}

	for (i = 0; i < src_len; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i + 1] = '\0';

	return (dest);
}
