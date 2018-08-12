#include <stdlib.h>
#include <stdio.h>

void	pgcd(int nb1, int nb2)
{
	int div;
	int pgcd;

	div = 1;
	if (nb1 <= 0 || nb2 <= 0)
		return;
	while (div <= nb1 || div <= nb2)
	{
		if (nb1 % div == 0 && nb2 % div== 0)
			pgcd = div;
		div = div + 1;
	}
	printf("%d", pgcd);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		pgcd(atoi(argv[1]), atoi(argv[2]));
	printf("\n");
	return (0);
}
