/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 00:24:30 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/11 15:46:15 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *p;

	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	ft_strlcpy(p, &s[start], len + 1);
	return (p);
}

// int main()
// {
// 	char const *s = "qweryghizlanazerty";
// 	unsigned int stt = 5;
// 	size_t l = 7;
// 	printf("%s", ft_substr(s, stt, l));
// }
