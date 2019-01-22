/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 18:24:12 by albarret          #+#    #+#             */
/*   Updated: 2019/01/22 08:05:28 by albarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int size;
	int i;
	char *cpy;

	i = 0;
	size = 0;
	while (src[size])
		size++;
	if(!(cpy = malloc(sizeof(char) * size + 1)))
		return (0);
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (src);
}

int		main(void)
{
	printf("%s\n", ft_strdup("thisismystring"));
	return (0);
}
