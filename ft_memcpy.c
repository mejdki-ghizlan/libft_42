/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@c2r5p3.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 04:36:18 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/04 01:53:56 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memcpy(void *dst, const void *src, size_t n)  // elach amlin const void *src
{
	unsigned char *d = (unsigned char *)dst;             // baqi khsni nfham syntaxed casting u nefham kifach dik (un char *) dst
	const unsigned char *s = (const unsigned char *)src;

	while(n--)
	{
		*d++ = *s++;
	}
	return (dst);
}
