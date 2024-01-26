/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:21:34 by pcabanas          #+#    #+#             */
/*   Updated: 2024/01/15 11:05:18 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//compare two strings
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}
/*#include <string.h>
int	main(void)
{
	const char cc[] = "aac";
	const char cc2[] = "abc";
	size_t n = 4;
	printf ("%d\n%d\n",ft_strncmp(cc, cc2, n), strncmp(cc, cc2, n));
}*/