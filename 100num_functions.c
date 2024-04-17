/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   100num_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:44:31 by gmunoz            #+#    #+#             */
/*   Updated: 2024/04/17 19:42:30 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	num_position(swap_list *nums)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < nums->b_n_args)
	{
		if (nums->column_b[j] != nums->ordered_column[i])
			i++;
		else
		{
			nums->column_b[j] = i;
			i = 0;
			j++;
		}
	}
	i = 0;
	j = nums->b_n_args;
	while (j > 0)
	{
		ft_printf("column b[%d] = %d\n", i, nums->column_b[i]);
		i++;
		j--;
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
	nums->ordered_column = nums->column_b;
	while (i < nums->b_n_args)
	{
		while (j < nums->b_n_args - 1)
		{
			if (nums->ordered_column[j] > nums->ordered_column[j + 1])
				swap(nums, j);
			j++;
		}
		j = 0;
		i++;
	}
	i = 0;
	j = nums->b_n_args;
	while (j > 0)
	{
		ft_printf("ordered colummn[%d] = %d\n", i, nums->ordered_column[i]);
		i++;
		j--;
	}
}
