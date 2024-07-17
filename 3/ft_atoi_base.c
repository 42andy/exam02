int convert(char c)
{
	if (c >= '0' && c <= '9')
		return (c - 48);
	else if (c >= 'a' && c <= 'f')
		return (c - 87);
	else if (c >= 'A' && c <= 'F')
		return (c - 55);
	else
		return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
	int result = 0;
	int sign = 1;
	int digit;

	if (str_base < 2 || str_base > 16)
		return (0);
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while ((digit = convert(*str)) >= 0)
	{
		if (digit >= str_base)
			return (0);
		result *= str_base;
		result += digit;
		str++;
	}
	return (result * sign);
}

/*#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	if (ac == 3)
		printf("result: %d\n", ft_atoi_base(av[1], atoi(av[2])));
}*/