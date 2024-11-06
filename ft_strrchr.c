/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@c2r5p3.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:22:12 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/05 20:16:35 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (s[len] != c)
	{
		len--;
	}
	if (s[len] == c)
		return ((char *)&s[len]);
	return (NULL);
}

int main()
{
	const char *s = "ghizlan";
	int c = 'z';
	// printf("%s", ft_strrchr(NULL, c));
	printf("%s", strrchr(NULL, c));
}
