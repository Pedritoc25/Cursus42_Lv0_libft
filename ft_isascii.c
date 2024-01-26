/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:14:05 by pcabanas          #+#    #+#             */
/*   Updated: 2024/01/09 15:37:10 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks whether c fits into the ASCII character set
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 128);
}
/*#include<stdio.h>
#include<ctype.h>
int	main()
{
	char c = '0';
	printf ("%d\n", ft_isascii(c));
	printf ("%d\n", isascii(c));
}*/
