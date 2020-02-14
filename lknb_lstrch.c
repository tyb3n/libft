/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenoist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 14:38:32 by tbenoist          #+#    #+#             */
/*   Updated: 2015/12/10 14:13:28 by tbenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstrch(t_list *list, void *cont, size_t size)
{
	if (list == NULL)
		return (NULL);
	return (!ft_memcmp(list->content, cont, size)) ? list :
	ft_lstrch(list->next, cont, size);
}
