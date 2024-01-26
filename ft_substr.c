/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:23:14 by pcabanas          #+#    #+#             */
/*   Updated: 2024/01/25 10:39:37 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Returns a substring
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_s;
	size_t	len_e;
	char	*sub_str;

	i = 0;
	j = 0;
	len_s = s[start];
	len_e = ft_strlen(s);
	sub_str = (char *)malloc((len + 1) * sizeof(char));
	if (len == 0 || len == false || len == '\0' || len < 0 || sub_str == NULL)
		return (NULL);
	while (i < 1)
	{
		sub_str[i] = len_s + i;
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
/*int	main(void)
{
	char const		s[] = "abc";
	unsigned int	start = 1;
	size_t			len = 1;
	char result[] = ft_substr(s, start, len);
	//char*			dest = substr(s, start, len);

	printf("Result -> %s\n", result);
	free(result);
}*/
