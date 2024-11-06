/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@c2r5p3.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 00:45:37 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/06 21:49:37 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
int	ft_atoi(const char *str)
{
	int s;
	int d;

	// if (str == NULL)
	// 	return (0);
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

// int main()
// {
// 	const char *str = "  --1234qwerty";
// 	printf("%d\n", ft_atoi(NULL));
// 	// printf("%d", atoi());
// }
