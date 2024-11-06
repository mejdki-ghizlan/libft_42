/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@c2r5p3.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:12:25 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/05 19:17:42 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 && *s2) && *s1 == *s2 && n--)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

// int main()
// {
// 	const char *s1 = "ghiZlan";
// 	const char *s2 = "ghizlane";
// 	size_t n = 4;
// 	printf("%d", ft_strncmp(s1, s2, n));
// }

