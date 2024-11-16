/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 04:36:18 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/15 19:13:44 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memcpy(void *dst, const void *src, size_t n)  // elach amlin const void *src
{
	unsigned char *d;         // baqi khsni nfham syntaxed casting u nefham kifach dik (un char *) dst
	const unsigned char *s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	while(n--)
	{
		*d++ = *s++;
	}
	return (dst);
}
