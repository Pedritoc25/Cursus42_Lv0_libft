/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:32:23 by pcabanas          #+#    #+#             */
/*   Updated: 2024/02/01 15:47:34 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//compare memory areas
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	size_t				val;
	unsigned const char	*cc;
	const char			*cc2;

	i = 0;
	val = 0;
	cc = (unsigned const char *)s1;
	cc2 = (const char *)s2;
	while (i < n)
	{
		if (cc[i] > cc2[i])
			val += 1;
		if (cc[i] < cc2[i])
			val -= 1;
		i++;
	}
	return (val);
}
/*#include <string.h>
int	main()
{
	const char s[] = "acd";
	const char s2[] = "abd";
	size_t n = 3;

	printf("%d\n%d\n", ft_memcmp(s, s2, n), memcmp(s, s2, n));
}*/