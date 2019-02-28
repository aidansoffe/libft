/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunarbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 15:25:44 by amunarbe          #+#    #+#             */
/*   Updated: 2019/02/26 15:56:08 by amunarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** Appends a copy of the null-terminated string s2 to the end of the
** null-terminated string s1, then add a terminating '/0'. The string s1
** must have sufficient space to hold the result.
*/

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int s;
	int lent;

	s = 0;
	lent = 0;
	while (s2[i])
	{
		s1[len + 1] = s2[i];
		i++;
	}
	s1[len + 1] = '\0';
	return (s1);
}
