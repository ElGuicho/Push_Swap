/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   100num_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:44:31 by gmunoz            #+#    #+#             */
/*   Updated: 2024/04/12 15:25:47 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	num_position(swap_list *nums)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < nums->n_args)
	{
		if (nums->column_a[j] != nums->ordered_column[i])
			i++;
		else
		{
			nums->column_a[j] = i;
			i = 0;
			j++;
		}
	}
}

void	swap(swap_list *nums, int j)
{
	int	temp;
	
	temp = nums->ordered_column[j];
	nums->ordered_column[j] = nums->ordered_column[j + 1];
	nums->ordered_column[j + 1] = temp;
}

void	sort_nums(swap_list *nums)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	nums->ordered_column = nums->column_a;
	while (i < nums->n_args)
	{
		while (j < nums->n_args - 1)
		{
			if (nums->ordered_column[j] > nums->ordered_column[j + 1])
				swap(nums, j);
			j++;
		}
		j = 0;
		i++;
	}
}
