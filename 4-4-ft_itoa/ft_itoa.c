/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:37:24 by albarret          #+#    #+#             */
/*   Updated: 2018/11/13 18:34:19 by albarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void     itoa_isnegative(int *n, int *negative)
{
    if (*n < 0)
    {
        *n *= -1;
        *negative = 1;
    }
}

char            *ft_itoa(int n)
{
    int     tmpn;
    int     len;
    int     negative;
    char    *str;

    if (n == -2147483648)
        return (ft_strdup("-2147483648"));
    tmpn = n;
    len = 2;
    negative = 0;
    itoa_isnegative(&n, &negative);
    while (tmpn /= 10)
        len++;
    len = len + negative;
    if ((str = (char*)malloc(sizeof(char) * len)) == NULL)
        return (NULL);
    str[--len] = '\0';
    while (len--)
    {
        str[len] = n % 10 + '0';
        n = n / 10;
    }
    if (negative)
        str[0] = '-';
    return (str);
}
