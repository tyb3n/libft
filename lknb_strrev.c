/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenoist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 15:22:59 by tbenoist          #+#    #+#             */
/*   Updated: 2015/12/03 15:33:26 by tbenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	tmp;
	int		i;
	size_t	len;

	i = 0;
	len = ft_strlen(str) - 1;
	while (i <= (int)len / 2)
	{
		tmp = str[i];
		str[i] = str[len - i];
		str[len - i] = tmp;
	}
	return (str);
}
