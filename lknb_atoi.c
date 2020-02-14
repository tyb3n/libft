/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenoist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 11:05:12 by tbenoist          #+#    #+#             */
/*   Updated: 2015/12/09 09:36:09 by tbenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int n;
	int	s;

	n = 0;
	s = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\r'
			|| *str == '\v' || *str == '\f')
		str++;
	if (*str == '-' && ft_isdigit(*(str + 1)))
	{
		s = -1;
		str++;
	}
	else if (*str == '+' && ft_isdigit(*(str + 1)))
		str++;
	while (ft_isdigit(*str))
	{
		n *= 10;
		n += *str - '0';
		str++;
	}
	return (n * s);
}
