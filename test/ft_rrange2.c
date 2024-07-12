#include <stdlib.h>

int	ft_abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

int	*ft_rrange(int start, int end)
{
	int	*tab;
	int	i;

	tab = (int *)malloc(sizeof(int) * (ft_abs(end - start) + 1));
	i = 0;
	if (!tab)
		return (NULL);
	if (end > start)
	{
		while (end >= start)
		{
			tab[i] = end;
			end--;
			i++;
		}
	}
	else if (end < start)
	{
		while (end <= start)
		{
			tab[i] = end;
			end++;
			i++;
		}
	}
	return (tab);
}