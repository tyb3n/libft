/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenoist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 12:22:47 by tbenoist          #+#    #+#             */
/*   Updated: 2015/12/10 14:08:48 by tbenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*p1;
	const char	*p2;
	size_t		i;
	size_t		dlen;

	i = size;
	p1 = dst;
	while (*p1 != '\0' && i-- != 0)
		p1++;
	dlen = p1 - dst;
	i = size - dlen;
	p2 = src;
	if (!i)
		return (dlen + ft_strlen(p2));
	while (*p2 != '\0')
	{
		if (i != 1)
		{
			*p1++ = *p2;
			i--;
		}
		p2++;
	}
	*p1 = '\0';
	return (dlen + (p2 - src));
}
