#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int num)
{
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	else if (num >= 10)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
		ft_putchar(num + '0');
}

int		main(int ac, char **av)
{
	char *str;

	if (ac == 1)
		ft_putchar('0');
	else
	{
		str = av[1];
		ft_putnbr(ac - 1);
	}
	ft_putchar('\n');
}
