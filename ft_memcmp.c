/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@c2r5p3.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 22:50:07 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/05 23:17:16 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *b1 = (const unsigned char *)s1;
	const unsigned char *b2 = (const unsigned char *)s2;

	while (*b1 && *b2 && (*b1 == *b2) && n--)
	{
			b1++;
			b2++;
	}
	return (*b1 - *b2);
}

// int main()
// {
// 	const char *s1 = "ghizlan";
// 	const char *s2 = "ghiZlan";
// 	size_t n = 4;
// 	printf("%d", ft_memcmp(s1, s2, n));
// }
