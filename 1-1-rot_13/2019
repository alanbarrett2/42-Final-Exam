/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 12:44:22 by albarret          #+#    #+#             */
/*   Updated: 2019/01/20 13:15:53 by albarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
			argv[1][i] += 13;
		else if (argv[1][i] >= 'n' && argv[1][i] <= 'z')
			argv[1][i] = (argv[1][i] - 'm') + 'a' - 1;

		else if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
			argv[1][i] += 13;

		else if (argv[1][i] >= 'N' && argv[1][i] <= 'Z')
		   argv[1][i] = (argv[1][i] - 'M') + 'A' - 1;
		ft_putchar(argv[1][i]);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
