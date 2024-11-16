/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 21:24:46 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/14 21:44:35 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void rotone(unsigned int i, char *c)
{
    i = 3;
    
    *c  += i;
}
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    if (!s || !f)
        return;
    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}

// int main()
// {
//     char s[5] = "huji";
//     void (*f)(unsigned int, char *);
//     f = rotone;
//     ft_striteri(s, f);
//     printf("%s", s);
// }