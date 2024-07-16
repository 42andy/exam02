#include <stdlib.h>

int	ft_len(long nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
	{
		nb = -nb;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int		len;
	long	nb;
	char	*str;

	len = ft_len(nbr);
	nb = nbr;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	if (nb < 0)
	{
		nb = -nb;
		str[0] = '-';
	}
	str[len] = '\0';
	str[len - 1] = '0';
	while (nb > 0)
	{
		len--;
		str[len] = (nb % 10) + 48;
		nb = nb / 10;
	}
	return (str);
}
