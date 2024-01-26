/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:10:15 by pcabanas          #+#    #+#             */
/*   Updated: 2024/01/17 09:58:27 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//locate character in string
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i++;
	}
	return ((void *)0);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	s[] = "Hey man";
	int			c = 'e';
	printf ("%s\n%s\n", ft_strchr(s, c), strchr(s, c));
}*/