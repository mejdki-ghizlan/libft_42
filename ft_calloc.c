/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 21:52:46 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/19 13:38:05 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}

// int main()
// {
// 	size_t count = 10;
// 	size_t size = 5;
// 	int *p;
// 	int i = 0;
// 	p = ft_calloc(count, size);
// 	while (i <= (count * size))    mafhamtchii
// 	{
// 		printf("%d", p[i]);
// 		i++;
// 	}
// }
