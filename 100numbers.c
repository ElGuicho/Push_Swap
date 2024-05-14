/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   100numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:13:11 by gmunoz            #+#    #+#             */
/*   Updated: 2024/05/14 18:44:55 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	placed_column_b(swap_list *nums)
{ 
	int min;
	if (nums->b_n_args < 2)
		return ;
	while (nums->column_a[0] < nums->column_b[0])
	{
		if (nums->column_b[nums->b_n_args - 1] > nums->column_b[0])
	}
}

void	move100(swap_list *nums)
{
	int	i;
	int	j;
	int	sort20;
	int	a_args;
	
	sort20 = 19;
	a_args = nums->n_args;
	sort_nums(nums, nums->column_a);
	num_position(nums);
	while (nums->n_args > 0)
	{
		i = 0;
		j = nums->n_args;
		while (nums->column_a[i] > sort20)
			i++;
		while (nums->column_a[j] > sort20)
			j--;
		if (i < nums->n_args - j + 1)
		{
			while (i > 0)
			{
				ra(nums);
				i--;
			}
		}
		else
		{
			while (j < nums->n_args + 1)
			{
				rra(nums);
				j++;
			}
		}
		placed_column_b(nums);
		pb(nums);
		if (nums->n_args = a_args - sort20 + 1)
			sort20 = sort20 + 20;
	}
}
