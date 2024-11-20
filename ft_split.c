/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:18:58 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/19 18:32:20 by gel-mejd         ###   ########.fr       */
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

static void	ft_free(char **s1)
{
	char	**p;

	p = s1;
	while (*s1)
	{
		free(*s1);
		*s1 = NULL;
		s1++;
	}
	free (p);
}

static void	healper(char **s1, const char *s, char c)
{
	size_t	len;
	int	i;
	const char	*p;

	i = 0;
	while (i < count_word(s, c))
	{
		len = 0;
		while (*s == c)
			s++;
		p = s;
		while (*s != c && *s != '\0')
		{
			s++;
			len++;
		}
		*s1 = (char *)malloc(len + 1);
		if (!*s1)
			ft_free(s1);
		ft_strlcpy(*s1, p, len);
		i++;
		s1++;
	}
	*s1 = (NULL);
}

char	**ft_split(char const *s, char c)
{
	int	cw;
	char	**s1;

	if (s == NULL)
		return (NULL);
	cw = count_word(s, c);
	s1 = malloc((cw + 1) * sizeof(char *));
	if (!s1)
		return (NULL);
	healper(s1, s, c);
	return (s1);
}

// int main()
// {
// 	const char *s = "this is my code   ";
// 	char c = ' ';
// 	char **t;

// 	t = ft_split(s, c);
// 	int i = 0;
// 	while(i < 4)
// 	{
// 		printf("%s\n" ,t[i]);
// 		i++;
// 	}
// }