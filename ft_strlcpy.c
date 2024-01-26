/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:45:34 by pcabanas          #+#    #+#             */
/*   Updated: 2024/01/16 16:04:19 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//size-bounded string copying and concatenation
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = 0;
	i = 0;
	while (src[i] != 0)
		i++;
	return (i);
}
/*#include <string.h>
int	main()
{
	char s[] = "abc";
	const char s2[] = "def";
	size_t n = 3;

	printf("%zu\n%zu\n", ft_strlcpy(s, s2, n), strlcpy(s, s2, n));
}*/