/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:12:25 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/20 02:44:45 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 || *s2) && n--)
	{
		if ((unsigned char )*s1 != (unsigned char )*s2)
			return ((unsigned char )*s1 - (unsigned char )*s2);
		s1++;
		s2++;
	}
	return (0);
}

// int main()
// {
// 	const char *s1 = "ghizlan";
// 	const char *s2 = "ghizla";
// 	size_t n = 8;
// 	printf("%d\n", ft_strncmp(s1, s2, n));
// 	printf("%d", strncmp(s1, s2, n));
// }