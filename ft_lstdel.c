/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunarbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 21:35:28 by amunarbe          #+#    #+#             */
/*   Updated: 2019/03/06 22:16:55 by amunarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*current;

	while (*alst != NULL)
	{
		del((*alst)->content, (*alst)->content_size);
		current = *alst;
		free(*alst);
		*alst = (*alst)->next;
		current = NULL;
	}
}
