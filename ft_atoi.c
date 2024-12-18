/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 00:45:37 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/19 13:38:38 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	s;
	int	d;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	d = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			d *= (-1);
		str++;
	}
	s = 0;
	while (*str >= '0' && *str <= '9')
	{
		s = s * 10 + (*str - 48);
		str++;
	}
	return (s * d);
}
