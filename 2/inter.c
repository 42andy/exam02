#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int tab[256] = {0};

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					if (tab[(int)argv[1][i]] == 0)
					{
						write(1, &argv[1][i], 1);
						tab[(int)argv[1][i]] = 1;
					}
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}