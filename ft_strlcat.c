/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@c2r5p3.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 04:36:29 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/04 18:09:22 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len = strlen(dst); 			//?????
	if (dst_len >= dstsize)
		return (dst_len + ft_strlen(src));
	size_t	space_remaining = dstsize - dst_len - 1;
	size_t	i;
	i = 0;
	while (i < space_remaining && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + ft_strlen(src));
}
