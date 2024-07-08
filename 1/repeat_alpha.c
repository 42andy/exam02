#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	count;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			count = 1;
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
				count = argv[1][i] - 64;
			if (argv[1][i] >= 97 && argv[1][i] <= 122)
				count = argv[1][i] - 96;
			while (count >= 1)
			{
				write(1, &argv[1][i], 1);
				count--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}