/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 08:24:56 by albarret          #+#    #+#             */
/*   Updated: 2019/01/22 08:31:09 by albarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	   i++;
	return(s1[i] - s2[i]);
}

int		main(void)
{
	printf("%d\n", ft_strcmp("same","same"));
	printf("%d\n", ft_strcmp("notsame", "nsame"));
	printf("%d\n", strcmp("same", "same"));
	printf("%d\n", strcmp("notsame", "nsame"));
	return (0);
}
