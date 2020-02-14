/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenoist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:22:04 by tbenoist          #+#    #+#             */
/*   Updated: 2015/12/11 08:53:46 by tbenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int		i;

	i = 0;
	while (i < (int)n)
	{
		((char*)dst)[i] = ((char*)src)[i];
		i++;
		if (((char*)src)[i - 1] == c)
			return (dst + i);
	}
	return (NULL);
}
