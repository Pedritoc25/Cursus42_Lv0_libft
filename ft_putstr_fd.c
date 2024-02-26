/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:14:24 by pcabanas          #+#    #+#             */
/*   Updated: 2024/02/26 15:56:05 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Send the string 's' to the file descriptor specified
void	ft_putstr_fd(char *s, int fd)
{
	write (fd, s, ft_strlen(s));
}
/*int	main(void)
{
	ft_putstr_fd("hola", 1);
	return(0);
}*/
