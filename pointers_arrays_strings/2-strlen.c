/**
 * _strlen - print size of a string
 * @s: string parameteer
 * Return: integer
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
