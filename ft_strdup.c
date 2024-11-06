/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@c2r5p3.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 22:06:57 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/07 00:18:04 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
char	*ft_strdup(const char *s1)
{
	char *p;
	char *d;

	p = (char *)malloc(ft_strlen(s1) + 1);
	if (!p)
		return (NULL);
	d = p;
	while (*s1)
	{
		*p = *s1;
		s1++;
		p++;
	}
	*p = '\0';
	return (d);
}

// int main()
// {
// 	const char *s1 = "ghizlan";
// 	char *p;

// 	p = ft_strdup(s1);
// 	printf("%s", p);
// }
