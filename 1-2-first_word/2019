/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 13:17:00 by albarret          #+#    #+#             */
/*   Updated: 2019/01/20 13:29:48 by albarret         ###   ########.fr       */
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
		while ((argv[1][i] == ' ' || argv[1][i] == '\t') && (argv[1][i]))
			i++;
		while ((argv[1][i] != ' ' && argv[1][i] != '\t') && (argv[1][i]))
		{
			ft_putchar(argv[1][i]);
			i++;
		}
		if (argv[1][i] == ' ' || argv[1][i] == '\t')
			break;
	}
	write(1, "\n", 1);
	return (0);
}
