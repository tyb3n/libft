/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenoist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:33:57 by tbenoist          #+#    #+#             */
/*   Updated: 2015/11/24 15:53:37 by tbenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	tmp[len + 1];

	i = 0;
	while (i < (int)len)
	{
		tmp[i] = ((char *)src)[i];
		i++;
	}
	tmp[i] = '\0';
	i = 0;
	while (i < (int)len)
	{
		((char *)dst)[i] = tmp[i];
		i++;
	}
	return (dst);
}
