/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 04:54:16 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/15 05:39:50 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// void chihaja(void *p)
// {
//    printf("%s", p);
// }

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    while (lst)
    {
        f(lst->content);
        lst = lst->next;
    }
}

// int main()
// {
//     t_list *node1;
//     void (*f)(void *);
    
//     node1 = ft_lstnew(ft_strdup("abcdefghijkl6"));
  
    
//     f = chihaja;
//     ft_lstiter(node1, f);
    
// }