/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:16:37 by pcabanas          #+#    #+#             */
/*   Updated: 2024/02/16 12:35:58 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

//split a string into a series of tokens based on a particular delimiter.
char	**ft_split(char const *s, char c)
{
	size_t	len;
	size_t	word_len;
	size_t	i;
	size_t	j;
	char	**result;
	//char	*temp;

	len = 0;
	word_len = 0;
	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	//printf ("s[25] -> %s\n", s); //BORRAR
	//printf ("c[26] -> %c\n", c); //BORRAR
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			len++;
			while (s[i] != c && s[i] != '\0')
			{
				//printf ("Posicion[33] -> %c\n", s[i]); //BORRAR
				i++;
			}
			//printf ("NºPablabras -> %zu\n", len); //BORRAR
		}
		i++;
	}
	//printf ("\n\n\n\n"); //BORRAR
	i = 0;
	result = (char **)ft_calloc(len + 1, sizeof(char *));
	if (!result)
		return (NULL);
	while (j < len && s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
			{
				//printf ("Posicion[33]2 -> %c\n", s[i]); //BORRAR
				word_len++;
				i++;
			}
			//printf ("Len_Pablabra2 -> %zu\n", word_len); //BORRAR
			//printf ("Len para el temp calloc -> %zu\n", (word_len + 1) * sizeof(char)); //BORRAR
			//temp = (char *)ft_calloc(word_len + 1, sizeof(char));
			result[j] = ft_substr(s, i-word_len, word_len);
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
			//printf ("Cuanto mide temp -> %zu\n", ft_strlen(temp)); //BORRAR
			//word_len = ft_strlcpy(temp, &s[i - word_len], word_len + 1);
			//printf ("Cuanto mide temp2 -> %zu\n", ft_strlen(temp)); //BORRAR
			//printf ("Cuanto vale temp -> %s\n", temp); //BORRAR
			//result[j] = temp;
			//printf ("Posicion Result[%zu] -> %s\n", j ,result[j]); //BORRAR
			word_len = 0;
			j++;
		}
		i++;
	}
	//printf ("Posicion S[56] -> %c\n", s[i]); //BORRAR
	//printf ("Posicion Result[%zu] -> %s\n", j ,result[j]); //BORRAR
	//printf ("\n\n\n\n"); //BORRAR
	i = 0;
	while (result[i] != '\0')
	{
		//printf ("%s ", result[i]); //BORRAR
		i++;
	}
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
