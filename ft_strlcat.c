/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 04:36:29 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/19 12:59:39 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	space;

	slen = ft_strlen(src);
	if (!dst && !dstsize)
		return (slen);
	dlen = ft_strlen(dst);
	space = dstsize - dlen - 1;
	if (dstsize <= dlen)
		return (dstsize + slen);
	while (*dst)
		dst++;
	while (space-- && *src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (dlen + slen);
}
