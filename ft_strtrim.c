/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunarbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 16:24:10 by amunarbe          #+#    #+#             */
/*   Updated: 2019/03/01 16:25:53 by amunarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	char const	*new_str;

	if (!s)
		return (NULL);
	while (*s == '\t' || *s == '\n' || *s == ' ')
		s++;
	if (!*s)
		return (ft_strnew(0));
	new_str = s + ft_strlen(s) - 1;
	while (*new_str == '\t' || *new_str == '\n' || *new_str == ' ')
		new_str--;
	return (ft_strsub(s, 0, new_str - s + 1));
}
