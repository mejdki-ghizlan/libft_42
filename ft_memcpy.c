/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 04:36:18 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/20 02:52:08 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (dst == src)
		return (dst);
	while (n--) 
		*d++ = *s++;
	return (dst);
}

// int main()
// {
// 	char d[10] = "ghizlan";
// 	char s[10] = "ghizlan";
// 	//printf("%s", memcpy("hello", "hello", 4));
// 	printf("%s", ft_memcpy("hello", "hello", 4));
// }