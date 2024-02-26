/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:39:26 by pcabanas          #+#    #+#             */
/*   Updated: 2024/02/26 13:23:17 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Send the character 'c' to the file descriptor specified
void	ft_putchar_fd(char c, int fd)
{
	write(fd, (const void *)&c, 1);
}

/*int	main(void)
{
	char	c = 'H';
	int		fd = 2;
	return (0);
}*/
