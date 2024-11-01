/**
 * _atoi - print int of an integer
 * @s: char parameter
 * Return: int
 */

int _atoi(char *s)
{
	int sign = 1;
	int res = 0;
	int i = 0;

	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
	{
		i++;
	}

	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32 ||
			s[i] == '+' || s[i] == '-' || (s[i] >= 97 && s[i] <= 122) ||
			(s[i] >= 65 && s[i] <= 90))
	{
		if (s[i] == '-')
		{
			sign = sign * (-1);
		}
		i++;
	}

	while (s[i] >= 48 && s[i] <= 57)
	{
		res = (res * 10) + (s[i] - 48);
		i++;
	}

	res = res * sign;

	return (res);
}
