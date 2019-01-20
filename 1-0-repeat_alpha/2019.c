/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 09:01:32 by albarret          #+#    #+#             */
/*   Updated: 2019/01/20 09:22:48 by albarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		icheck(char c)
{
	int i;

	if (c >= 'a' && c <= 'z')
		i = c - 'a' + 1;
	else if (c >= 'A' && c <= 'Z')
		i = c - 'A' + 1;
	else
		i = 1;
	return (i);
}

int		main(int argc, char **argv)
{
	int index;
	int i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		index = icheck(argv[1][i]);
		while (index > 0)
		{
			ft_putchar(argv[1][i]);
			index--;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
