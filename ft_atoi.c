/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:54:22 by pcabanas          #+#    #+#             */
/*   Updated: 2024/01/31 18:02:53 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//convert a string to an integer
static int	check_spaces(int i, const char *nptr)
{
	if (nptr[0] == ' ' || nptr[0] == '\f' || nptr[0] == '\n'
		|| nptr[0] == '\r' || nptr[0] == '\t' || nptr[0] == '\v')
	{
		while (nptr[i] == ' ')
			i++;
	}
	return (i);
}

static int	get_number(int i, const char *nptr, int *digit, int *number)
{
	while (ft_isdigit(nptr[i]))
	{
		*digit = nptr[i] - '0';
		*number = *number * 10 + *digit;
		i++;
	}
	return (i);
}

int	check_value(const char nptr, int value, int *i)
{
	if (nptr == ' ' || nptr == '\f' || nptr == '\n'
		|| nptr == '\r' || nptr == '\t' || nptr == '\v')
		value = 3;
	else if (nptr == '-' && value == 0)
		value = -1;
	else if (nptr == '+' && value == 0)
		value = 1;
	*i = *i + 1;
	return (value);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	digit;
	int	value;
	int	number;

	i = 0;
	value = 0;
	digit = 0;
	number = 0;
	i = check_spaces(i, nptr);
	while (nptr[i] != '\0' && value != 3)
	{
		value = check_value(nptr[i], value, &i);
		if (!ft_isdigit(nptr[i]) && value != 0)
			return (value * number);
		else if (ft_isdigit(nptr[i]))
		{
			if (value == 0)
				value = 1;
			i = get_number(i, nptr, &digit, &number);
			return (number * value);
		}
		i++;
	}
	return (number * value);
}
/*#include <stdlib.h>
int	main()
{
	//const char nptr[]= "      +56w0e";
	const char nptr[]= "2";
	printf("%i\n%i\n", ft_atoi(nptr), atoi(nptr));
	//printf("%i\n", atoi(nptr));
}*/