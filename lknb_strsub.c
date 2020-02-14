/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenoist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:11:34 by tbenoist          #+#    #+#             */
/*   Updated: 2015/12/09 13:05:03 by tbenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*res;
	size_t		i;

	i = 0;
	if (!(res = ft_strnew(len)))
		return (NULL);
	while (i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	return (res);
}
