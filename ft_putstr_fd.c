/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 22:09:06 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/14 22:48:18 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <fcntl.h>
void ft_putstr_fd(char *s, int fd)
{
    while (*s)
    {
        write(fd, s, 1);
        s++;
    }
}

// int main()
// {
//     char *s = "ghizlan";
//     int fd = open("test_file.txt", O_WRONLY);
    
//     ft_putstr_fd(s, fd);
//     close (fd);
// }