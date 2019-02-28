/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunarbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 17:52:18 by amunarbe          #+#    #+#             */
/*   Updated: 2019/02/27 18:33:20 by amunarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char *lst;

	lst = (0);
	while (*s)
	{
		if (s == c)
			lst = (char *)s;
		++s;
	}
	if (lst)
		return (lst);
	if (c == '\0')
		return ((char*)s);
	return (0);
}
