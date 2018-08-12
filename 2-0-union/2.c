#include <unistd.h>

int		ft_str(char *str, char c, int i)
{
	int x;

	x = 0;
	while (i > x)
	{
		if (str[x] == c)
			return (1);
		x++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (ft_str(argv[1], argv[1][i], i) == 0)
				write(1, &argv[1][i], 1);
			i++;
		}
		while (argv[2][j])
		{
			if((ft_str(argv[1], argv[2][j], i) == 0)
					&& (ft_str(argv[2], argv[2][j], j) == 0))
				write(1, &argv[2][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
