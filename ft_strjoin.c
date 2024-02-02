/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:24:15 by pcabanas          #+#    #+#             */
/*   Updated: 2024/01/31 18:02:06 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//combine elements
static char	*ft_mystrcat(const char *dst, const char *src)
{
	size_t	i;
	char	*s;
	size_t	s_len;

	s = (char *)ft_calloc((ft_strlen(dst) + ft_strlen(src) + 1), sizeof(char));
	i = 0;
	s_len = 0;
	while (dst[i] != '\0')
	{
		s[i] = dst[i];
		i++;
	}
	s_len = ft_strlen(s);
	i = 0;
	while (src[i] != '\0')
	{
		s[s_len + i] = src[i];
		i++;
	}
	return (s);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;

	s = ft_mystrcat(s1, s2);
	if (s == NULL)
		return (NULL);
	else
		return ((char *)s);
}
/*int	main(void)
{
	char const	s1[]  = "abc";
	char const	s2[]  = "abc";
	char		*result = ft_strjoin(s1, s2);
	printf("%s\n", result);
}*/
