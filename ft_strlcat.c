/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:43:05 by pcabanas          #+#    #+#             */
/*   Updated: 2024/01/17 11:50:41 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//size-bounded string copying and concatenation
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;

	i = 0;
	dst_len = ft_strlen(dst);
	while (src[i] != '\0' && i + dst_len < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst_len + ft_strlen(src));
}
/*#include <string.h>
int	main(void)
{
	char dst[20] = "abc";
	const char src[] = "abc";
	size_t size = sizeof(dst);
	printf("%lu\n%lu\n", ft_strlcat(dst, src, size), strlcat(dst, src, size));
}*/