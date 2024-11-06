/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@c2r5p3.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:10:33 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/04 18:21:30 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_toupper(int c)
{
	if (c >= 'a' && c <='z')
		c -= 32;
	return (c);
}

/*int main()
{
	char d = 'g';
	printf("%c", ft_toupper(d));
}*/
