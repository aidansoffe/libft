/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunarbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 22:09:54 by amunarbe          #+#    #+#             */
/*   Updated: 2019/03/05 00:39:40 by amunarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t n)
{
	size_t p;
	size_t i;

	p = 0;
	i = 0;
	if (!*substr)
		return ((char *)str);
	while (str[p] != '\0' && p < n)
	{
		if (str[p] == substr[0])
		{
			i = 1;
			while (substr[i] != '\0' && str[p + i] == substr[i])
				i++;
			if (p == n)
				return ((char *)&str[p]);
		}
		p++;
	}
	return (0);
}
