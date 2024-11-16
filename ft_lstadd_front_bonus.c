/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:56:03 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/15 03:58:12 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstadd_front(t_list **lst, t_list *new)
{
    if ((lst == NULL) || (new == NULL))
        return;
    else if (*lst == NULL)
        *lst = new;
    else
    {   
        new->next = *lst;
        *lst = new;
    }
}

// int main()
// {
//     t_list *node1, *node2, *first;
//     t_list *header;
//     node1 = ft_lstnew("abcd");
//     node2 = ft_lstnew("efghi");
//     first = ft_lstnew("jklmn");

//     node1->next = node2;
    
//     header = node1;
    
//     while (header)
//     {
//         printf("%s\n", header->content);
//         header = header->next;
//     }
//     header = node1;
    
//     ft_lstadd_front(&node1, first);
//     printf("========================\n");
    
//     while (header)
//     {
//         printf("%s\n", header->content);
//         header = header->next;
//     }
// }