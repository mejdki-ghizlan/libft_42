/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@c2r5p3.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:39:45 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/03 22:37:47 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *d;
    int i = 0;
    d = (unsigned char *) b;

    while (i < len)
    {
        d[i] = (unsigned char) c;
        i++;
    }
    return (b);
}

int main ()
{
    int b;
	//11111000 00110000
	//00000111 11010000
	ft_memset(&b, 255, 4);
	ft_memset(&b, 248, 2);
	ft_memset(&b, 48, 1);
	printf("%d", b);
}
