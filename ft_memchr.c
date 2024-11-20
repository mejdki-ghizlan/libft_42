/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:13:26 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/20 02:37:00 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*d;

	d = (const unsigned char *)s;
	while (n--)
	{
		if (*d == (unsigned char)c)
			return ((void *)d);
		d++;
	}
	return (NULL);
}

// int main()
// {
// 	char *s = NULL;
// 	int c = 200;
// 	size_t n = 7;
// 	printf("%s\n", ft_memchr(s, c, n));
// 	printf("%s\n", memchr(s, c, n));
// }