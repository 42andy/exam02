unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	n;

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		n = a;
	if (a < b)
		n = b;
	while (1)
	{
		if (n % a == 0 && n % a == 0)
			return (n);
		n++;
	}
}