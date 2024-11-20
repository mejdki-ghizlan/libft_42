/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:41:50 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/19 21:39:39 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	slen;

	if (!dst && dstsize == 0)
		return 0;
	slen = ft_strlen(src);
	if (dstsize == 0)
		return (slen);
	while ((dstsize-- > 0) && *src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (slen);
}
