#include <ctype.h>
/**
*_islower - function checks the lower character
*@c: the chracter to check
*Return: 0 or 1
*/
int _islower(int c)
{
	if (islower(c))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
