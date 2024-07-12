#include <unistd.h>

void	putnbr(int x)
{
	char	*base;

	base = "0123456789";
	if (x > 9)
	{
		putnbr(x / 10);
	}
	write(1, &base[x % 10], 1);
}

int	main(int argc, char *argv[])
{
	(void)argv;
	putnbr(argc - 1);
	write(1, "\n", 1);
}