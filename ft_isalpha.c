/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:43:19 by pcabanas          #+#    #+#             */
/*   Updated: 2024/01/09 15:28:20 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//isalpha - check whether a character is alphabetical
int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/*#include<stdio.h>
#include<ctype.h>
int	main()
{
	char	c= 'z';
	int		condition = ft_isalpha(c);
	int		condition2 = isalpha(c);
	printf ("%d\n", condition);
	printf ("%d\n", condition2);
}*/
