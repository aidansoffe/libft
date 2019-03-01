/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunarbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 22:01:58 by amunarbe          #+#    #+#             */
/*   Updated: 2019/02/27 22:04:15 by amunarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, const char *substr)
{
	int p;
	int i;

	if (!*substr)
		return ((char *)str);
	p = 0;
	while (str[p] != '\0')
	{
		if (str[p] == substr[0])
		{
			i = 1;
			while (substr[i] != '\0' && str[p + i] == substr[i])
				i += 1;
			if (substr[i] == '\0')
				return ((char *)&str[p]);
		}
		p += 1;
	}
	return (0);
}
