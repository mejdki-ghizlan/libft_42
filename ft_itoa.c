/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:05:58 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/19 13:35:02 by gel-mejd         ###   ########.fr       */
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

char	*ft_itoa(int n)
{
	char	*s;
	char	*p;
	int	m;

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

// int main()
// {
// 	int n = -2147483648;
// 	printf("%s", ft_itoa(n));
// }