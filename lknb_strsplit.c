/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenoist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 09:42:40 by tbenoist          #+#    #+#             */
/*   Updated: 2015/12/18 13:55:23 by tbenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_stralloc(char const *s, char c, char **t)
{
	int		i;
	int		len;

	i = 0;
	while (s[i])
	{
		len = 0;
		while (s[i] != c && s[i])
		{
			len++;
			i++;
		}
		if (!(*t = ft_strnew(len)))
			return (0);
		while (s[i] == c)
			i++;
		t++;
	}
	return (1);
}

static int		ft_countword(char const *s, char c)
{
	int		i;
	int		word;

	word = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c)
			i++;
		word++;
	}
	return (word + 1);
}

static char		*ft_trim(char const *s, char c)
{
	char	*trim;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] == c && s[i])
		i++;
	if (!s[i])
		return ("\0");
	while (s[i + j + 1] != '\0')
		j++;
	while (s[i + j] == c)
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

char			**ft_strsplit(char const *s, char c)
{
	char	**list;
	char	*str;
	int		i;
	int		j;

	i = 0;
	if ((str = ft_trim(s, c)) && (list = (char**)malloc(sizeof(char*) * ft_countword(str, c))))
	{
		if (!(ft_stralloc(str, c, list)))
			return (NULL);
		while (*str)
		{
			j = 0;
			while (*str != c && *str)
				list[i][j++] = *(str++);
			list[i++][j] = '\0';
			while (*str == c)
				str++;
		}
		list[i] = NULL;
		return (list);
	}
	else
		return (NULL);
}
