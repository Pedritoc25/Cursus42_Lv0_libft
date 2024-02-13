/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:23:14 by pcabanas          #+#    #+#             */
/*   Updated: 2024/02/13 12:17:16 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//returns a substring
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	len_e;
	char	*sub_str;
	char	*temp;

	i = 0;
	len_e = ft_strlen(s);
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	sub_str = (char *)malloc((len + 1) * sizeof(char));
	if (sub_str == NULL || !s)
		return (NULL);
	temp = sub_str;
	if (len == 0 || start >= len_e)
	{
		temp[i] = '\0';
		return (temp);
	}
	while (i < len && s[start + i] != '\0')
	{
		temp[i] = s[start + i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
/*int	main(void)
{
	char const	s[] = "abc";
	unsigned int	start = 1;
	size_t		len = 1;
	char		*result;

	printf("Original string: \"%s\"\n", s);
	printf("Start index: %u\n", start);
	printf("Length: %zu\n", len);

	result = ft_substr(s, start, len);
	if (result == NULL)
	{
		printf("Error: Substring creation failed.\n");
		return (1);
	}

	printf("Substring: \"%s\"\n", result);
	free(result);

	return (0);
}*/
