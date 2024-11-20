/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gel-mejd <gel-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:39:45 by gel-mejd          #+#    #+#             */
/*   Updated: 2024/11/19 13:19:24 by gel-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*d;
	size_t			i;

	d = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		d[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

// int main ()
// {
//      int b;
//      ft_memset(&b, 0, 4);
//      ft_memset(&b, 5, 2);
//      ft_memset(&b, 57, 1);
//      printf("%d", b);
// }

// int main()
// {
//     char b[10] = "abcdefghi";
//     ft_memset(b, 'X', 4);
//     printf("%s", b);
//     return (0);
// }

// int main()
// {
//     char b[10] = "abcdefghi";
//     ft_memset(b, 'X', 0);
//     printf("%s", b);
// }

// int main()
// {
//     int i = 0;
//     char b[10] = {0};
//     ft_memset(b, 1, 5);
//     while (i < 10)
//     {
//         printf("%d", b[i]);
//         i++;
//     }
// }

// int main()
// {
//     char *buff = NULL;
//     ft_memset(buff, 'X', 5);        // crash
// }

// int main()
// {
//     int i = 0;
//     char buff[10] = "abcdefghi";
//     ft_memset(buff, -1, 5);  // -1 becomes 255 in unsigned char
//     while ( i < 10)
//     {
//         printf("%d ", (unsigned char)buff[i]);
//         i++;
//     }
// }

// int main()
// {
//     size_t len = 1000000;  // 1 MB
//     char *b = malloc(len);
//     if (!b)
//         return (0);
//     ft_memset(b, 'A', len);
//     printf("%c\n", b[len - 1]);
//     free(b);
// }