#include <unistd.h>

int		main(int argc, char **argv)
{
	int	 i;
	int	 j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[2][j] != '\0')
		{
			if (argv[1][i] == argv[2][j])
				i++;
			if (argv[1][i] == '\0')
			{
				write(1, "1\n", 2);
				return (0);
			}
			j++;
		}
		write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
