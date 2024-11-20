/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:05:58 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/20 22:14:37 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_size(long m)
{
	int	size;

	size = 0;
	if (m <= 0)
	{
		size++;
		m = -m;
	}
	while (m > 0)
	{
		m /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int nb)
{
	char	*s;
	char	*p;
	int		m;
	long	n;

	n = nb;
	m = count_size(n);
	s = (char *)malloc(m + 1);
	if (!s)
		return (NULL);
	p = s + m;
	*p = '\0';
	if (n < 0)
	{
		*s = '-';
		n = -n;
		m--;
	}
	while (m--)
	{
		p--;
		*p = n % 10 + '0';
		n = n / 10;
	}
	return (s);
}
