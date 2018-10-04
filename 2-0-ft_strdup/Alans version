/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 14:19:17 by alabarre          #+#    #+#             */
/*   Updated: 2018/10/03 22:36:33 by alabarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char *savestr;

	savestr = (char*)malloc(sizeof(*savestr) * (ft_strlen(src) + 1));
	savestr = ft_strcpy(savestr, src);
	return (savestr);
}
