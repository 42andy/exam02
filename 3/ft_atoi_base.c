char	low(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int get_digit(char c, int digits_in_base)
{
	int max_digit;

	if (digits_in_base <= 10)
		max_digit = digits_in_base + 48;
	else
		max_digit = digits_in_base + 87;
	if (c >= '0' && c <= '9' && c <= max_digit)
		return (c - 48);
	else if (c >= 'a' && c <= 'f' && c <= max_digit)
		return (c - 87);
	else
		return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
	int result = 0;
	int sign = 1;
	int digit;

	if (*str == '-')
	{
		sign = -1;
		str++;
	}

	while ((digit = get_digit(low(*str), str_base)) >= 0)
	{
		result *= str_base;
		result += (digit * sign);
		str++;
	}
	return (result);
}
