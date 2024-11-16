/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:18:58 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/11 15:46:04 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	**ft_split(char const *s, char c)
{
	int count_word;
	size_t len;
	int i;
	const char *p;
	char **s1;
	char *s2;
	char const *reset;
	char **check;

	if (s == NULL)
		return (NULL);
	reset = s;
	count_word = 0;
	while (*s)
	{
		while (*s == c)
		{
			s++;	
		}
		if (*s == '\0')
			break;
		while (*s != c)
			s++;
		count_word++;
		s++;
		//return (count_word);
	}
	printf("%d\n", count_word);
	
	s = reset;
	s1 = malloc(count_word * sizeof(char *) + 1);
	if (!s1)
		return NULL;
	i = 0;
	while (i < count_word)
	{
		len = 0;
		while (*s == c)
			s++;
		p = s;
		while (*s != c)
		{
			s++;
			len++;
		}
		//return (len);
		*s1 = (char *)malloc(len + 1);
		*s1= "otmane";
		ft_strlpy(*s1, p, len + 1);
		printf("%s\n", *s1);
		i++;
		s1++;
	}
	*s1 = (NULL);
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
