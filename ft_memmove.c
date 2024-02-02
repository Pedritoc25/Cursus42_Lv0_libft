/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 10:48:07 by pcabanas          #+#    #+#             */
/*   Updated: 2024/01/31 16:35:30 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//copy memory area and prevents overlapping
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*uc_dest;
	unsigned char	*uc_src;

	i = 0;
	uc_dest = (unsigned char *)dest;
	uc_src = (unsigned char *)src;
	if (uc_dest <= uc_src)
	{
		while (i < n)
		{
			uc_dest[i] = uc_src[i];
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			uc_dest[n] = uc_src[n];
			n--;
		}
	}
	return (dest);
}
/*#include <string.h>
int	main()
{
	const char src[] = "defg";
	char dest[] = "abc";
	const char src2[] = "defg";
	char dest2[] = "abc";
	size_t n = 4;

	ft_memmove(dest, src, n);
	memmove(dest2, src2, n);

	printf("%s\n%s\n", dest, dest2);
}*/
