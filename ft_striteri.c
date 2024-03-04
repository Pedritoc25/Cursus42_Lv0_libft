/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:14:48 by pcabanas          #+#    #+#             */
/*   Updated: 2024/02/28 15:24:45 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	f(unsigned int i, char c)
{
	char s;
	s = ft_toupper(c);
	return (s);
}*/

/*lets you aplly the same function (f) to the each element of an array
and can modify its pointer*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*int	main(void)
{
	char const	s[] = "hola";

	ft_striteri(s, (f));
	return (0);
}*/
