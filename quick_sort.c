/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nberen <nberen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/22 15:39:46 by doberyn           #+#    #+#             */
/*   Updated: 2022/03/24 13:51:35 by nberen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**		ft_quick_sort - Запуск быстрой сортировки массива чисел,
** 		рабоотает рекурсивно.
*/

void	ft_quick_sort(int *array, int start, int end)
{
	int	q;

	if (start < end)
	{
		q = ft_partition(array, start, end);
		ft_quick_sort(array, start, q - 1);
		ft_quick_sort(array, q + 1, end);
	}
}

/*
**		ft_partition - Разбиение массива и основной
**		процесс сортировки протекает в данной функции.
*/

int	ft_partition(int *array, int start, int end)
{
	int	pivot;
	int	i;
	int	temp;
	int	j;

	pivot = array[end];
	i = start - 1;
	j = start;
	while (j < end)
	{
		if (array[j] <= pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
		j++;
	}
	temp = array[i + 1];
	array[i + 1] = array[end];
	array[end] = temp;
	return (i + 1);
}
