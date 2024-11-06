/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@c2r5p3.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:41:50 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/04 04:34:01 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	if (dstsize == 0)
		return (ft_strlen(src));
	size_t	i;
	i = 0;
	while ((i < dstsize - 1) && (src[i] != '\0'))  // khsni nzid nfham hada u nfham ta tariqa akhra dial chat
	{
		dst[i] = src[i];
		i++;
	}
	return (ft_strlen(src));
}
