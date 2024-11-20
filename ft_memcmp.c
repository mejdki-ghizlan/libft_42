/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 22:50:07 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/20 02:42:37 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*b1 = (const unsigned char *)s1;
	const unsigned char	*b2 = (const unsigned char *)s2;

	while (n--)
	{
		if (*b1 != *b2)
			return (*b1 - *b2);
		b1++;
		b2++;
	}
	return (0);
}

// int main()
// {
// 	const char *s1 = "ghizlan";
// 	const char *s2 = "ghiZlan";
// 	size_t n = 4;
// 	printf("%d", ft_memcmp(s1, s2, n));
// }