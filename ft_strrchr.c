/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:50:13 by pcabanas          #+#    #+#             */
/*   Updated: 2024/02/01 17:03:50 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//locate character in string starting at end
char	*ft_strrchr(const char *s, int c)
{
	size_t		len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)&s[len]);
		len--;
	}
	return (NULL);
}
/*#include <string.h>
int	main(void)
{
	const char	s[] = "teste";
	const char	t[] = "teste";
	int			c = 'x';
	printf("%s\n%s\n", ft_strrchr(s, c), strrchr(t, c));
	return (0);
}*/
