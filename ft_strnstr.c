/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@c2r5p3.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 23:18:04 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/06 00:42:36 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int position = 0;
	while (*haystack && n--)
	{
		if (*haystack == *needle && n > 0)
		{
			position++;
			needle++;
			if (*needle == '\0')
				return ((char *)(haystack - position + 1));
		}
		haystack++;
	}
	return (0);
}

// int main()
// {
// 	printf("%s", ft_strnstr("edfhfjhgarth", "hfj", 15));
// }
