/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:18:58 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/20 23:10:03 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	cw;

	cw = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			break ;
		while (*s != c && *s != '\0')
			s++;
		cw++;
	}
	return (cw);
}

static int	ft_free(char **s1, int i)
{
	int	j;

	j = 0;
	if (s1)
	{
		while (j < i)
		{
			free(s1[j]);
			j++;
		}
		free(s1);
	}
	return (0);
}

static int	healper(char **s1, const char *s, char c, int cw)
{
	size_t		len;
	int			i;
	const char	*p;
	char		**tmp;

	i = 0;
	tmp = s1;
	while (i++ < cw)
	{
		len = 0;
		while (*s == c)
			s++;
		p = s;
		while (*s != c && *s != '\0' && ++len)
			s++;
		*s1 = malloc(len + 1);
		if (!*s1)
			return (ft_free(tmp, i));
		ft_strlcpy(*s1, p, len + 1);
		s1++;
	}
	*s1 = (NULL);
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		cw;
	char	**s1;

	if (s == NULL)
		return (NULL);
	cw = count_word(s, c);
	s1 = malloc((cw + 1) * sizeof(char *));
	if (!s1)
		return (NULL);
	if (!healper(s1, s, c, cw))
		return (NULL);
	return (s1);
}

// int	main(void)
// {
// 	char **str = ft_split("hohreqvj opjop jop p", ' ');
// 	printf("%p\n", str);
// }