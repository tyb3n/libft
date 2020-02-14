/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenoist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:00:20 by tbenoist          #+#    #+#             */
/*   Updated: 2015/12/09 10:12:42 by tbenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nbsize(long n)
{
	int		size;

	size = 1;
	while (n / 10)
	{
		n /= 10;
		size++;
	}
	if (n < 0)
		size++;
	return (size);
}

static long		ft_getunit(long n, int unit)
{
	while (unit--)
		n /= 10;
	return (n % 10);
}

char			*ft_itoa(int n)
{
	char	*res;
	int		i;
	int		j;
	long	nbr;

	nbr = n;
	i = 0;
	j = ft_nbsize(nbr);
	if ((res = (char*)malloc(sizeof(char) * (j + 1))))
	{
		if (nbr < 0)
		{
			res[i] = '-';
			i++;
			nbr *= -1;
		}
		while (j - i)
		{
			res[i] = '0' + ft_getunit(nbr, j - i - 1);
			i++;
		}
		res[i] = '\0';
	}
	return (res);
}
