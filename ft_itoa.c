/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:22:08 by pcabanas          #+#    #+#             */
/*   Updated: 2024/02/19 13:29:51 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//convert the integer n into a character string.
char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	int		n2;

	n2 = n;
	len = 0;

	if (n = 0)
	{
		//strdub
		return ("0");
	}
	if (n = -2147483648)
	{
		//strdub
		return ("-2147483648");
	}
	while(n2 > 0)
	{
		if (n < 0)
		{
			n2 = -n2;
			len++;
		}
		n2 %= 10;
		len++;
	}
	result = (char *)ft_calloc(len + 1, sizeof (char));
	while (len)
	{
		result[len - 1] = (n % 10);
		len--;
	}

	return (result);
}

int	main(void)
{
	int	i = 100;
	printf(ft_itoa(i));
	return (0);
}
