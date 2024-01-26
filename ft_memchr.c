/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:07:49 by pcabanas          #+#    #+#             */
/*   Updated: 2024/01/16 10:28:35 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//scan memory for a character
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned const char	*cc;

	i = 0;
	cc = (unsigned const char *)s;
	while (i < n)
	{
		if (cc[i] == c)
			return ((void *)(cc + i));
		i++;
	}
	return (NULL);
}
/*#include <string.h>
int		main(void)
{
	const char	s[] = "abc";
	const char	s2[] = "abc";
	int			c = 'c';
	size_t		n = 3;
	printf ("%s\n%s\n", ft_memchr(s, c, n), memchr(s2, c, n));
}*/