#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 33 && str[i] <= 126)
			ft_putchar(str[i]);
		i++;
	}
}

void	display_word(char str *)
{
	char *last;
	int i;

	i = 0;
	last = &str[i];
	while (str[i] != '\0')
	{
		if (!(str[i] >= 33 && str[i] <= 126))
		{
			if (str[i + 1] >= 33 && str[i + 1] <= 126)
				last = &str[i + 1];
		}
		i++;
	}
	if (last)
		ft_putstr(last);
}

int main (int argc, char **argv)
{
	if (argc == 2)
		display_word(argv[1]);
	ft_puthcar('\n')
	return (0);
}
