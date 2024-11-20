/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 22:48:46 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/19 13:24:40 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*s;

	s = malloc(sizeof(t_list));
	if (!s)
		return (NULL);
	if (!content)
		s->content = NULL;
	else
		s->content = content;
	s->next = NULL;
	return (s);
}

// int main()
// {
//     t_list *node, *node1;

//     node = ft_lstnew("otmane"); 
// }
