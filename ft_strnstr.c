/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 23:18:04 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/20 02:46:28 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int	position;

	if (!haystack && !n)
		return (NULL);
	if (*needle == '\0')
		return (NULL);
	position = 0;
	while (*haystack && n-- > 0)
	{
		if (*haystack == *needle)
		{
			position++;
			needle++;
			if (*needle == '\0')
				return ((char *)(haystack - position + 1));
		}
		haystack++;
	}
	return (NULL);
}

int main()
{
	printf("%s\n", ft_strnstr("", NULL, 0));
	printf("%s", strnstr("", NULL, 0));
}