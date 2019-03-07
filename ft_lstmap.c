/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunarbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 14:11:19 by amunarbe          #+#    #+#             */
/*   Updated: 2019/03/07 14:34:26 by amunarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *nlist;

	if (lst != NULL && f != NULL)
	{
		nlist = f(lst);
		if (nlist != NULL && lst->next != NULL)
			nlist->next = ft_lstmap(lst->next, f);
		return (nlist);
	}
	return (NULL);
}
