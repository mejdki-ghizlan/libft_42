/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 04:00:12 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/19 13:28:34 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// int main()
// {
//     t_list *node1;
//     void(*del)(void*);
//     del = delete;
//     node1 = ft_lstnew(ft_strdup("abcdef"));
//     printf("%s\n", node1->content);
//     ft_lstdelone(node1, del);
//     printf("\n%s\n", node1->content);
// }