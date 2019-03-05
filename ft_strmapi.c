/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunarbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 12:06:36 by amunarbe          #+#    #+#             */
/*   Updated: 2019/03/01 12:08:38 by amunarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str_res;

	if (!s || !f)
		return (NULL);
	str_res = ft_strnew(ft_strlen(s));
	if (!str_res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str_res[i] = (*f)(i, s[i]);
		i++;
	}
	return (str_res);
}
