/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:55:09 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/19 13:00:13 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	dstsize;

	if (!s1 || !s2)
		return (NULL);
	dstsize = ft_strlen(s1) + ft_strlen(s2) + 1;
	s3 = (char *)malloc(dstsize);
	if (!s3)
		return (NULL);
	ft_strlcpy(s3, s1, dstsize);
	ft_strlcat(s3, s2, dstsize);
	return (s3);
}

// int main()
// {
// 	char s1[] = "";
// 	char s2[] = "medfg";
// 	printf("%s\n", ft_strjoin(NULL, s2));
// }