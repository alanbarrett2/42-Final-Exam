#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	int		n;
	int		nb;

	if (ac == 2)
	{
		if (av[1][0] == '\0')
		{
			printf("\n");
			return (0);
		}
		nb = atoi(av[1]);
		if (nb == 1)
		{
			printf("1\n");
			return (0);
		}
		while (1)
		{
			n = 1;
			while (++n <= nb)
			{
				if (nb % n == 0)
				{
					printf("%d", n);
					nb = nb / n;
					break ;
				}
			}
			if (nb == 1)
				break ;
			else
				printf("*");
		}
	}
	printf("\n");
	return (0);
}
