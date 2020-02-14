/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenoist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 14:21:22 by tbenoist          #+#    #+#             */
/*   Updated: 2015/12/10 13:12:04 by tbenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_end(t_list **alst, t_list *new)
{
	if (!*alst)
		*alst = new;
	else
		(*alst)->next == NULL ? (*alst)->next = new :
			ft_lstadd_end(&(*alst)->next, new);
}
