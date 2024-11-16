/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 23:18:04 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/16 17:33:38 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int position;

	position = 0;
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
// 	printf("%s\n", ft_strnstr("hghgedfhotm anefjhgarth", "otmane", 15));
// 	printf("%s", strnstr("hgjgedfhfjhotm anegarth", "otmane", 15));
// }
