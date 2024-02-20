/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:16:37 by pcabanas          #+#    #+#             */
/*   Updated: 2024/02/20 12:14:13 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	word_count(char const *s, char c, size_t len, size_t i)
{
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			len++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		i++;
	}
	return (len);
}

//split a string into a series of tokens based on a particular delimiter.
char	**ft_split(char const *s, char c)
{
	size_t	len;
	size_t	word_len;
	size_t	i;
	size_t	j;
	char	**result;

	len = 0;
	word_len = 0;
	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	len = word_count(s, c, len, i);
	result = (char **)ft_calloc(len + 1, sizeof(char *));
	if (!result)
		return (NULL);
	while (j < len && s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
			{
				word_len++;
				i++;
			}
			result[j] = ft_substr(s, i - word_len, word_len);
			if (!result[j])
			{
				while (j >= 0)
				{
					free(result[j]);
					j--;
				}
				free(result);
				return (NULL);
			}
			word_len = 0;
			j++;
		}
		i++;
	}
	i = 0;
	while (result[i] != '\0')
		i++;
	return (result);
}

/*int	main(void)
{
	char const	*s = "hello!";
	char		c = ' ';
	char **res = ft_split(s, c);
	//int i = 0;
	printf("Resultado: %s\n", res[1]);
	return (0);
}*/
