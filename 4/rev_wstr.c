#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	start;
	int	end;
	int	space;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		i--;
		space = 0;
		while (i >= 0)
		{
			while (i >= 0 && argv[1][i] == 32)
				i--;
			if (i < 0)
				break;
			end = i;
			while (i >= 0 && argv[1][i] != 32)
				i--;
			start = i + 1;;
			if (space == 1)
				write(1, " ", 1);
			space = 1;
			while (start <= end)
			{
				write(1, &argv[1][start], 1);
				start++;
			}
			i--;
		}
	}
	write(1, "\n", 1);
}
