/**
 * _strcmp - compare two strings
 * @s1: param 1
 * @s2: param 2
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int len = 0;

	while (s1[len] != '\0' && s2[len] != '\0')
	{
		if (s1[len] != s2[len])
			return (s1[len] -s2[len]);
		len++;
	}
	return (0);
}
