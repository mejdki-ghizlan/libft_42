/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 05:40:04 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/20 21:50:08 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*s;
	t_list	*newlist;
	char	*con;

	newlist = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		con = f(lst->content);
		s = ft_lstnew(con);
		if (!s)
		{
			del(con);
			ft_lstclear(&newlist, del);
		}
		ft_lstadd_back(&newlist, s);
		lst = lst->next;
	}
	return (newlist);
}
