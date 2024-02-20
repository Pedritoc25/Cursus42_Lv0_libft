/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:22:08 by pcabanas          #+#    #+#             */
/*   Updated: 2024/02/20 10:50:16 by pcabanas         ###   ########.fr       */
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

	if (n2 == 0)
		return (result = ft_strdup("0"));
	if (n2 == -2147483648)
		return (result = ft_strdup("-2147483648"));
	if (n2 < 0)
	{
		n2 = -n2;
		len++;
	}
	while (n2 > 0)
	{
		n2 /= 10;
		len++;
	}
	n2 = n;
	if (n2 < 0)
		n2 = -n2;
	result = (char *)ft_calloc(len + 1, sizeof (char));
	if (!result)
		return (NULL);
	while (len)
	{
		result[len - 1] = (n2 % 10) + '0';
		n2 /= 10;
		len--;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}

int    main(void)
{
    int    i = 10101;
	printf("i = %d | %s\n", i, ft_itoa(i));
    return (0);
}
