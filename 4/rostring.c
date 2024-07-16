#include <unistd.h>

void	writew(char *str1, char *str2)
{
	while (str1 < str2)
	{
		write(1, str1, 1);
		str1++;
	}
}

int	main(int argc, char *argv[])
{
	char	*str;
	char	*str1;
	char	*str2;
	if (argc > 1)
	{
		str = argv[1];
		while (*str == 32 || *str == 9)
			str++;
		str1 = str;
		while (*str != 32 && *str != 9 && *str != '\0')
			str++;
		str2 = str;
		while (*str == 32 || *str == 9)
			str++;
		if (*str)
		{
			while (*str)
			{
				if (*str == 32 || *str == 9)
				{
					while (*str == 32 || *str == 9)
						str++;
					if (*str)
						write(1, " ", 1);
				}
				else
				{
					write(1, str, 1);
					str++;
				}
			}
			write(1, " ", 1);
		}	
		writew(str1, str2);
	}
	write(1, "\n", 1);
}
