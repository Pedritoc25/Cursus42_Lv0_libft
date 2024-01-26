/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:02:25 by pcabanas          #+#    #+#             */
/*   Updated: 2024/01/25 11:20:05 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//removes all "set" characters from the beginning and the end of a string
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{

}
int	main()
{
	char const s1[] = "abc";
	char const set[] = "a";
	char result = ft_strtrim(s1, set);
	printf("%s\n", result);
}
