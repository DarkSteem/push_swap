/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nberen <nberen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/22 14:43:33 by doberyn           #+#    #+#             */
/*   Updated: 2022/03/24 13:36:16 by nberen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**		ft_only_spaces - Проверяем строку
** 		на наличие разделителей.
*/

int	ft_only_spaces(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
			|| str[i] == ' ' || str[i] == '\r' || str[i] == '\f')
			i++;
		else
			return (1);
	}
	return (0);
}

/*
**		ft_is_sorted - Проверяем массив
** 		на отсортированность.
*/

int	ft_is_sorted(t_data *new)
{
	int	i;

	i = 0;
	while (i < (new->count_element - 1))
	{
		if (new->a[i] > new->a[i + 1])
			return (1);
		i++;
	}
	return (0);
}

/*
**		rrr: rrа и rrb одновременно.
*/

void	ft_rrr(t_stacks *s, int i)
{
	ft_rra(&s->a, 0);
	ft_rrb(&s->b, 0);
	if (i == 1)
		write(1, "rrr\n", 4);
}
