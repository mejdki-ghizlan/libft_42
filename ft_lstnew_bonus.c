/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 22:48:46 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/15 03:19:24 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list *ft_lstnew(void *content)
{
    t_list *s;
    
    s = malloc(sizeof(t_list));
    if (!s)
        return (NULL); 
    s->content = content;
    s->next = NULL;
    
    return (s);
}

// int main()
// {
//     t_list *node, *node1;

//     node = ft_lstnew("otmane"); 
// }
