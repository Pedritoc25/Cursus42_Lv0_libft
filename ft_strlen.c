/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:04:18 by pcabanas          #+#    #+#             */
/*   Updated: 2024/01/12 19:45:47 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//calculate the length of a stringi
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
/*#include <string.h>
int	main()
{
	char s[] = "abc";
	printf("%lu\n", ft_strlen(s));
	printf("%lu\n", strlen(s));
}*/
