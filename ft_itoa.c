/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunarbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 16:31:03 by amunarbe          #+#    #+#             */
/*   Updated: 2019/03/01 16:31:48 by amunarbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*num;
	int				size;
	unsigned int	n1;

	size = (n <= 0) ? 1 : 0;
	n1 = (n < 0) ? (-1 * n) : n;
	while (n1)
	{
		n1 /= 10;
		size++;
	}
	num = (char *)malloc(sizeof(char) * (size + 1));
	if (!num)
		return (NULL);
	n1 = (n < 0) ? (-1 * n) : n;
	num[size] = '\0';
	while (size)
	{
		num[--size] = n1 % 10 + '0';
		n1 /= 10;
	}
	if (n < 0)
		num[size] = '-';
	return (num);
}
