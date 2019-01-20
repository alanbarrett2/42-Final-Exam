/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 14:09:32 by albarret          #+#    #+#             */
/*   Updated: 2019/01/20 14:37:10 by albarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int len;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][len])
		len++;
	len--;
	while (len > -1)
	{
		ft_putchar(argv[1][len]);
		len--;
	}
	write(1, "\n" ,1);
	return (0);
}
