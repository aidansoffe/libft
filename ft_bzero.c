/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunarbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 16:15:01 by amunarbe          #+#    #+#             */
/*   Updated: 2019/02/25 16:33:27 by amunarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

void		ft_bzero(void *s, size_t n)
{
	char	*string;
	size_t	i;

	i = 0;
	string = (char *)s;
	if (n == 0)
		return ;
	else
	{
		while (n != 0)
		{
			n--;
			string[i] = 0;
			i++;
		}
	}
}
