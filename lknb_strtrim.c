/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenoist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:03:19 by tbenoist          #+#    #+#             */
/*   Updated: 2015/12/09 15:56:52 by tbenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*trim;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i])
		i++;
	if (!s[i])
		return ("\0");
	while (s[i + j + 1] != '\0')
		j++;
	while ((s[i + j] == ' ' || s[i + j] == '\n'
				|| s[i + j] == '\t') && s[i + j])
		j--;
	if (!(trim = ft_strnew(j + 1)))
		return (NULL);
	while (k < j + 1)
	{
		trim[k] = s[i + k];
		k++;
	}
	return (trim);
}
