#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putasci(unsigned char c)  
{
	if (c >= 32 && c < 127)
		ft_putchar(c);
	else
		ft_putchar('.');
}

void 	ft_puthex(unsigned char c)  
{
	char tab[16] = "0123456789abcdef";

	ft_putchar(tab[c / 16]);
	ft_putchar(tab[c % 16]);
}

void	ft_printline(unsigned char *temp, size_t start, size_t max) 
{
	size_t	i;

	i = start;
	while (i < (start + 16) && i < max)  
	{
		ft_puthex(temp[i]);
		if (i % 2 != 0)
			ft_putchar(' ');
		i++;
	}
	while (i < (start + 16)) .
	{
		ft_putchar(' ');
		ft_putchar(' ');
		if (i % 2 != 0)
			ft_putchar(' ');
		i++;
	}
	i = start;
	while (i < (start + 16) && i < max)  
	{
		ft_putasci(temp[i]);
		i++;
	}
	ft_putchar('\n');
}

void	print_memory(const void *addr, size_t size)
{
	unsigned char  *temp;
	size_t			i;

	temp = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		ft_printline(temp, i, size);
		i = i + 16;
	}
}

int	main(void)
{
	int	tab[10] = {0, 23, 150, 255,
	              12, 16,  21, 42};

	print_memory(tab, sizeof(tab));
	return (0);
}
