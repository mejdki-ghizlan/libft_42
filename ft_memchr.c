/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@c2r5p3.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:13:26 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/05 22:10:34 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *d = (const unsigned char *)s;
	while (*d && n--)
	{
		if (*d == c)
			return ((void *)d);
		d++;
	}
	return (NULL);
}

// int main()
// {
// 	const char *s = "ghizlane";
// 	int c = 'n';
// 	size_t n = 5;
// 	printf("%s", ft_memchr(s, c, n));
// }
