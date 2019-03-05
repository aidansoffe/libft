/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunarbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 13:51:14 by amunarbe          #+#    #+#             */
/*   Updated: 2019/03/05 00:43:20 by amunarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	int		i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	string = (char *)malloc((sizeof(char) *
				(ft_strlen(s1) + ft_strlen(s2) + 1)));
	if (!string)
		return (NULL);
	while (*s1 != '\0')
		string[i++] = *s1++;
	while (*s2 != '\0')
		string[i++] = *s2++;
	string[i] = '\0';
	return (string);
}
