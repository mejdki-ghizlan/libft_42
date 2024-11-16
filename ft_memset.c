/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:39:45 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/15 19:09:22 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *d;
    int i;
    d = (unsigned char *) b;

    i = 0;
    while (i < len)
    {
        d[i] = (unsigned char ) c;
        i++;
    }
    return (b);
}

int main ()
{
    int b;
	//11111000 00110000
	//00000111 11010000
	ft_memset(&b, 0, 4);
	ft_memset(&b, 5, 2);
	ft_memset(&b, 57, 1);
    
	printf("%d", b);
}
