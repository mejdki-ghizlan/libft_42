/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 23:18:04 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/20 17:42:52 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	needle_size;

	needle_size = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && n-- >= needle_size)
	{
		if (ft_strncmp(haystack, needle, needle_size) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}

// int main()
// {
// 	char *str = "MZIRIBMZIRIBMZE123";
// 	char *needle = "MZIRIBMZE";
// 	printf("%s\n", ft_strnstr(str, needle, strlen(needle)));
// 	printf("%s", strnstr(str, needle, strlen(needle)));
// }