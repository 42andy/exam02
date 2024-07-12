#include <stdlib.h>

int	ft_abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

int	*ft_range(int start, int end)
{
	int	*tab;
	int	i;

	tab = (int *)malloc(sizeof(int) * (ft_abs(start - end) + 1));
	i = 0;
	if (!tab)
		return (NULL);
	if (start > end)
	{
		while (start >= end)
		{
			tab[i] = start;
			i++;
			start--;
		}
	}
	else if (start < end)
	{
		while (start <= end)
		{
			tab[i] = start;
			i++;
			start++;
		}
	}
	return (tab);
}