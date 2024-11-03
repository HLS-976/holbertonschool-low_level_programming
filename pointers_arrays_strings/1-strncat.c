/**
 * _strncat - cacatenate two strings with n byte
 * @dest: param 1
 * @src: param 2
 * @n: param 3
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int src_len = 0;
	int i;

	while (dest[dest_len] != '\0')
		dest_len++;

	while (src[src_len] != '\0')
		src_len++;

	for (i = 0; i < n; i++)
		dest[dest_len + i] = src[i];

	return (dest);
}
