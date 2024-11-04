/**
 * _strspn - gets the length of a prefix substring
 * @s: char
 * @accept: char
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] != accept[i])
			{
				j++;
			}
			else
			{
				count++;
			}
		}
	}
	count--;
	return (count);
}
