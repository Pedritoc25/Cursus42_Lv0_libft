/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:57:45 by pcabanas          #+#    #+#             */
/*   Updated: 2024/03/05 10:17:57 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst && !del)
		return ;
	del(lst->content);
	free(lst);
}

/*int	main(void)
{
	return (0);
}*/
