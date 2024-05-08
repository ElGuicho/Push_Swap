/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   100num_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:44:31 by gmunoz            #+#    #+#             */
/*   Updated: 2024/05/08 18:03:30 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	num_position(swap_list *nums)
{
	int	i;
	int	j;

	i = 0;
/* 	j = nums->b_n_args;
	while (j > 0)
	{
		ft_printf("column b[%d] = %d\n", i, nums->column_b[i]);
		i++;
		j--;
	} */
	j = 0;
	while (j < nums->b_n_args)
	{
		i = 0;
		while (nums->column_b[j] != nums->ordered_column[i])
			i++;
		nums->column_b[j] = i;
		j++;
	}
	i = 0;
	j = nums->b_n_args;
	while (j > 0)
	{
		ft_printf("column b 0 to 99[%d] = %d\n", i, nums->column_b[i]);
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

void	sort_nums(swap_list *nums, int *column_b)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < nums->b_n_args)
	{
		nums->ordered_column[i] = column_b[i];
		i++;
	}
	i = 0;
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
	/* i = 0;
	j = nums->b_n_args;
	while (j > 0)
	{
		ft_printf("ordered colummn[%d] = %d\n", i, nums->ordered_column[i]);
		i++;
		j--;
	} */
}

void	last_nbs(swap_list *nums, int less_than_5)
{
	int	i;

	i = less_than_5;
	while (less_than_5 > 0)
	{
		pa(nums);
		less_than_5--;
	}
	/*	k = 0;
	j = nums->n_args;
	while (j > 0)
	{
		ft_printf("column a[%d] = %d\n", k, nums->column_a[k]);
		k++;
		j--;
	} */
	if (i == 4)
		hundred_move5(nums, nums->column_a, i);
	else if (i > 1)
		hundred_move3(nums, nums->column_a, i);	
}
