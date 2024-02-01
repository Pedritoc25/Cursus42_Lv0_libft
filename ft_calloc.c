/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:07:29 by pcabanas          #+#    #+#             */
/*   Updated: 2024/01/31 16:30:52 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//allocate and free dynamic memory
void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_bytes;
	void	*result;

	total_bytes = nmemb * size;
	result = malloc(total_bytes);
	if (result == NULL)
		return (NULL);
	ft_bzero(result, total_bytes);
	return (result);
}
/*int		main()
{
	size_t	nmemb = 10;
	size_t*	arr_calloc = (size_t *)ft_calloc(nmemb, sizeof(size_t));

	free(arr_calloc);
}*/
