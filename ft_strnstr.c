/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:41:43 by pcabanas          #+#    #+#             */
/*   Updated: 2024/01/17 10:12:33 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//locate a substring in a string
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*little == '\0')
		return ((char *)big);
	while (i < len - 1 && big[i] != '\0')
	{
		if (big[i] == little[j])
		{
			j++;
			if (little[j] == '\0')
				return ((char *)(big + i - j + 1));
		}
		else
			j = 0;
		i++;
	}
	return (NULL);
}
/*#include <string.h>
int	main(void)
{
	const char	little[] = "Hola";
	const char	big[] = "abcHolap";
	size_t len = 8;

	printf ("%s\n%s\n", ft_strnstr(big, little, len), strnstr(big, little, len));
}*/