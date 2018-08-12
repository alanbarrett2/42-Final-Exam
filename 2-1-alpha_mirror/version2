#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	
	i = 0;
	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if (argv[1][i] > 64 && argv[1][i] < 91)
			{
				argv[1][i] = 155 - argv[1][i];
				write(1, &argv[1][i], 1);
			}
			else if (argv[1][i] > 96 && argv[1][i] < 123)
			{
				argv[1][i] = 219 - argv[1][i];
				write(1, &argv[1][i], 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
