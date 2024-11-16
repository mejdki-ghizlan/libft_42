/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:34:07 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/16 18:43:51 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(int arg)
{
    if ((arg >= 'a' && arg <= 'z') || (arg >= 'A' && arg <= 'Z'))
        return (1);
    return (0);
}
