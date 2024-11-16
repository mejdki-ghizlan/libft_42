/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 00:29:10 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/14 21:41:23 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *p;
    int i;
    if (!s || !f)
        return (NULL);
    p = malloc(ft_strlen(s) + 1);
    if (!p)
        return NULL;
    i = 0;
    while (s[i])
    {
        p[i] = f((unsigned int )i, s[i]);
        i++;
    }
    p[i] = '\0';
    return p;
}

// int main()
// {
//     char const *s = "abcdef";
//     char (*f) (unsigned int , char);
//     f = ttouuper;
//     printf("%s", ft_strmapi(s, f));
// }