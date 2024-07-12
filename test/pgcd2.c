#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	nb1;
	int	nb2;

	nb1 = atoi(argv[1]);
	nb2 = atoi(argv[2]);
	i = nb1;
	if (argc == 3)
	{
		while (i > 0)
		{
			if (nb1 % i == 0 && nb2 % i == 0)
			{
				printf("%d", i);
				break;
			}
			i--;
		}
	}
	printf("\n");
}