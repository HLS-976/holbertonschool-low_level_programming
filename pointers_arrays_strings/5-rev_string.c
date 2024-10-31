/**
 * rev_string - reverse string
 * @s: string parameter
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char tmp_string;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;

	while (i >= 0)
	{
		tmp_string = s[j];
		s[j] = s[i];
		s[i] = tmp_string;

		i--;
		j++;
	}
}
