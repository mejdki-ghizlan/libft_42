/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@c2r5p3.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:53:03 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/08 18:18:10 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t size;
	char	*result;
	char *strim;

	if (s1 == NULL)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	printf("%zu\n", start);

	end = ft_strlen(s1) - 1;

	printf("%zu\n", end);

	while (s1[end] && ft_strchr(set, s1[end ]))
		end--;

	printf("%zu\n", end);

	size = end - start + 1;
	printf("%zu\n", size);
	result = (char *)malloc(size);
	if (!result)
		return (NULL);
	ft_strlcpy(result, &s1[start], size + 1);
	return (result);
}

// int main()
// {
// 	char *s = "02.ghizlanelmejd2.";
// 	char *set = ".20.";
// 	printf("%s", ft_strtrim(s, set));
// }
