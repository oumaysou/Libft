/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumaysou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 19:07:13 by oumaysou          #+#    #+#             */
/*   Updated: 2018/11/13 19:07:30 by oumaysou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int		nb_len(int n)
{
	unsigned int	count;

	count = 1;
	while (n /= 10)
		count++;
	return (count);
}

char				*ft_itoa(int n)
{
	unsigned int	count;
	unsigned int	nb;
	char			*str;

	count = nb_len(n);
	nb = n;
	if (n < 0)
	{
		count++;
		nb = -n;
	}
	if (!(str = ft_strnew(count)))
		return (0);
	if (!nb)
		str[0] = '0';
	str[count] = '\0';
	while (nb)
	{
		str[--count] = nb % 10 + '0';
		nb /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
