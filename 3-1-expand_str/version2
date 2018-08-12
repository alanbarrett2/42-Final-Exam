#include <unistd.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i])
		{
			if ((argv[1][i] == ' ' || argv[1][i] == '\t' || (argv[1][i] >= 33 && argv[1][i] <= 126)) &&
					argv[1][i + 1] == '\0')
			{
				write(1, "\n", 1);
				return (0);
			}
			while ((argv[1][i] == ' ' || argv[1][i] == '\t') && (argv[1][i + 1] == ' '
						|| argv[1][i + 1] == '\t'))
				i++;
			if ((argv[1][i] == ' ' || argv[1][i] == '\t') && (argv[1][i + 1] >= 33 && argv[1][i + 1] <= 126))
			{
				write(1, " ", 3);
				i++;
			}
			while (argv[1][i] >= 33 && argv[1][i] <= 126)
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
