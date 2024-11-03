/**
 * _strcat - concatenate string
 * @dest: target
 * @src: source
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int size = 0;
	int len = 0;
	int i, j;

	while (*dest != '\0')
	{
		size++;
		dest++;
	}

	while (*src != '\0')
	{
		len++;
		src++;
	}
	len--;

	for (i = size; i < src[len]; i++)
	{
		for (j = 0; j < src[len]; j++)
		{
			dest[i] = src[j];
		}
	}
	return (dest);
}
