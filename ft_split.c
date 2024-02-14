/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:16:37 by pcabanas          #+#    #+#             */
/*   Updated: 2024/02/14 17:03:40 by pcabanas         ###   ########.fr       */
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
	char	*temp;

	len = 0;
	word_len = 0;
	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	/*if (!c)
	{
		//Crear n string con solo s como argumento + elemento vacio
	}*/
	printf ("s[25] -> %s\n", s); //BORRAR
	printf ("c[26] -> %c\n", c); //BORRAR
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			len++;
			while (s[i] != c && s[i] != '\0')
			{
				printf ("Posicion[33] -> %c\n", s[i]); //BORRAR
				i++;
			}
			printf ("NºPablabras -> %zu\n", len); //BORRAR
		}
		i++;
	}
	printf ("\n\n\n\n"); //BORRAR
	i = 0;
	result = (char **)ft_calloc(len + 1, sizeof(char *));
	if (!result)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
			{
				printf ("Posicion[33]2 -> %c\n", s[i]); //BORRAR
				word_len++;
				i++;
			}
			printf ("Len_Pablabra2 -> %zu\n", word_len); //BORRAR
			temp = (char *)ft_calloc(word_len + 1, sizeof(char));
			if (!temp)
    			return (NULL);
			printf ("Cuanto mide temp -> %zu\n", sizeof(temp)); //BORRAR
			ft_strlcpy(temp, s + i - word_len, word_len + 1);
			temp[ft_strlen(temp)] = '\0';
			printf ("Cuanto mide temp2 -> %zu\n", sizeof(temp)); //BORRAR
			printf ("Cuanto vale temp -> %s\n", temp); //BORRAR
			result[j] = temp;
			printf ("Posicion Result[%zu] -> %s\n", j ,result[j]); //BORRAR
			word_len = 0;
			j++;
		}
		i++;
	}
	result[j] = "\0";
	printf ("Posicion S[56] -> %c\n", s[i]); //BORRAR
	printf ("Posicion Result[%zu] -> %s\n", j ,result[j]); //BORRAR
	printf ("\n\n\n\n"); //BORRAR
	printf ("%s\n", *result); //BORRAR
	return (NULL);
}

int	main(void)
{
	char const	*s = "Hola Muy    Buenas Caracola";
	char		c = ' ';
	ft_split(s, c);
	return (0);
}
