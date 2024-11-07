/**
 * _sqrt_recursion - return natural square root of a number
 * @n: parameter
 * Return: parameter
 */


int square(int x, int y);

int _sqrt_recursion(int n)
{
	if (n < -1)
	{
		return (0);
	}
	else
	{
		int i = 1;

		return (square(n, i));
	}
}

/**
 * square - square function
 * @x: int
 * @y: y
 * Return: int
 */

int square(int x, int y)
{
	if (y * y < x)
	{
		return (square(x, y + 1));
	}
	else if (y * y > x)
	{
		return (-1);
	}
	else
	{
		return (y);
	}
}
