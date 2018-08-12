#include <unistd.h>

int		ft_atoi(char *str)
{
	int		i;
	int		nbr;
	int		sign;

	i = 0;
	sign = 1;
	nbr = 0;
	while(str[i] == ' ' || str[i] == '\f' || str[i] == '\v' || str[i] == '\r'
			|| str[i] == '\n' || str[i] == '\t' )
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		nbr *= 10;
		nbr += str[i] - '0';
		i++;
	}
	nbr *= sign;
	return (nbr);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	value;
		int i;
		int str[64];
		char base[16] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};

		value = ft_atoi(argv[1]);
		i = 0;
		if (value < 0)	
		{
			write(1, "\n", 1);
			return (0);
		}
		if (value == 0)
		{
			write(1,"0\n", 2);
			return (0);
		}
		while (value != 0)
		{
			str[i] = value % 16;
			value = value / 16;
			i++;
		}
		i--;
		while (i >= 0)
		{
			write(1, &base[str[i]], 1);
			i--;
		}
	}
	write(1, "\n", 1);
	return(0);
}
