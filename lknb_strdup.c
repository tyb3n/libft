/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenoist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:36:16 by tbenoist          #+#    #+#             */
/*   Updated: 2015/12/09 10:58:55 by tbenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen(s1);
	if (!(s2 = ft_strnew(size)))
		return (NULL);
	while (i < ft_strlen(s1))
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}
