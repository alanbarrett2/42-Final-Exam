/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   josephsunion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlevine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 16:27:28 by jlevine           #+#    #+#             */
/*   Updated: 2018/08/16 20:23:21 by jlevine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}


//tests if a char is in a string. if yes return 1 else return 0.
int ischar(char c, char *str)
{
	int i = 0;
	while (str[i])
	{
		if (c == str[i])
			return(1);
		i++;
	}
	return(0);
}

int	main(int argc, char **argv)

//gamp plan: make an output array. dump chars into it if they are not already in the array. Then print that shit
{
	char output[260]; //only 256 unique ascii so output cant be bigger then 256
	int i = 1;		  //add a few to be safe :)
	int j = 0;
	int outindex = 0;

	while (outindex < 259) //fill output with null
	{
		output[outindex] = '\0';
		outindex++;
	}

	outindex = 0;
	if (argc != 3)
	{
		ft_putchar('\n');
		return(0);
	}

	while (i <= 2)
	{
		while(argv[i][j])
		{
			if (!ischar(argv[i][j], output)) //if char is not in output, dump it in
				{
					output[outindex] = argv[i][j];
					outindex++;
				}
			j++;
		}
		j = 0;
		i++;
	}
	ft_putstr(output); //print that shit
	ft_putchar('\n');
	return(0);
}
