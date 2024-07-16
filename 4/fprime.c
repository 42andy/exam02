#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int 	nb;
		int	prime;

		nb = atoi(argv[1]);
		prime = 2;
		if (nb == 1)
			printf("1");
		else if (nb > 1)
		{
			while (prime > 1)
			{
				if (nb % prime == 0)
				{
					printf("%d", prime);
					nb /= prime;
					if (nb > 1)
						printf("*");
					prime--;
				}
				prime++;
			}
		}
		
	}
	printf("\n");
}
