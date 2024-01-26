/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:50:13 by pcabanas          #+#    #+#             */
/*   Updated: 2024/01/12 20:32:48 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//strrchr - locate character in string
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;

	len = ft_strlen(s);
	while (len > 0)
	{
		if (s[len - 1] == c)
			return ((char *)&s[len - 1]);
		len--;
	}
	return ((void *)0);
}
/*#include <string.h>
int	main(void)
{
	const char	s[] = "abac";
	const char	t[] = "abac";
	int			c = 'a';
	printf("%s\n%s\n", ft_strrchr(s, c), strrchr(t, c));
	return (0);
}*/
