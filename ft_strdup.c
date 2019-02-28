/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunarbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 14:11:50 by amunarbe          #+#    #+#             */
/*   Updated: 2019/02/26 14:30:15 by amunarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strdup(const char *s1)
{
	char	*fresh;
	int		i;

	i = 0;
	fresh = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!fresh)
		return (NULL);
	while (s1[i] != '\0')
	{
		fresh[i] = s1[i];
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
