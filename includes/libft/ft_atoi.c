/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nberen <nberen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:44:21 by nberen            #+#    #+#             */
/*   Updated: 2022/03/24 19:24:21 by nberen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit(char str)
{
	if (str >= '0' && str <= '9')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	unsigned int			i;
	int						s;
	long long				res;

	i = 0;
	s = 1;
	res = 0;
	while (str[i] != '\0' && (str[i] == 32
			|| str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			s = -1;
	}
	while (ft_digit(str[i]))
	{
		if (res > 214748364 && *str > 7 && s == 1)
			ft_error();
		if (res > 214748364 && *str > 8 && s == -1)
			ft_error();
		res = res * 10 + (str[i++] - '0');
	}
	return ((int)(res * s));
}
