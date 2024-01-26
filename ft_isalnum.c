/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:26:58 by pcabanas          #+#    #+#             */
/*   Updated: 2024/01/17 10:15:40 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//isalnum - check whether a character is alphanumeric
#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*#include<stdio.h>
#include<ctype.h>
int	main()
{
	char c = 'Z';
	printf ("%d\n", ft_isalnum(c));
	printf ("%d\n", isalnum(c));
}*/
