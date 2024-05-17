/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   500numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:13:23 by gmunoz            #+#    #+#             */
/*   Updated: 2024/05/17 18:06:20 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move500(swap_list *nums)
{
	int	i;
	int	j;
	int	sort20;
	int	a_args;
	
	ft_printf("a\n");
	sort20 = 99;
	a_args = nums->n_args;
	sort_nums(nums, nums->column_a);
	num_position(nums);
	while (nums->n_args > 0)
	{
		i = 0;
		j = nums->n_args - 1;
		while (nums->column_a[i] > sort20)
			i++;
		while (nums->column_a[j] > sort20)
			j--;
		if (i <= nums->n_args - j + 1)
		{
			if (nums->b_n_args > 100 && (nums->column_b[0] < sort20 + 50 && nums->column_b[0] > 100))
			{
				rr(nums);
				i--;
			}
			while (i-- > 0)
				ra(nums);
		}
		else
		{
			while (j++ < nums->n_args + 1)
				rra(nums);
		}//placed_column_b(nums, nums->column_a[0], 0, nums->b_n_args - 1);
		pb(nums);
		if (nums->b_n_args > 100 && (nums->column_b[0] < sort20 + 50 && nums->column_b[0] > 100))
			rb(nums);
		i = 0;
		j = nums->b_n_args;
		while (j > 0)
		{
			ft_printf("column b[%d] = %d\n", i, nums->column_b[i]);
			i++;
			j--;
		}
		if (nums->n_args == a_args - sort20 + 1)
			sort20 = sort20 + 100;
	}
	while (nums->b_n_args > 0)
	{
		i = 0;
		j = nums->b_n_args - 1;
		while (nums->column_b[i] < nums->b_n_args - 5)
			i++;
		while (nums->column_b[j] < nums->b_n_args - 5)
			j--;
		if (i <= nums->b_n_args - j + 1)
		{
			while (i-- > 0)
				rb(nums);
		}
		else
		{
			while (j++ < nums->b_n_args)
				rrb(nums);
		}
		placed_column_a(nums, nums->column_b[0], 0, nums->n_args - 1);
		pa(nums);
		i = 0;
		j = nums->n_args;
		while (j > 0)
		{
			ft_printf("column a[%d] = %d\n", i, nums->column_a[i]);
			i++;
			j--;
		}
	}
	j = nums->n_args - 1;
	while (nums->column_a[j] != 0)
		j--;
	while (j++ < nums->n_args)
		rra(nums);
	//move5(nums, nums->column_a);
	/* i = 0;
	while (nums->column_b[i] > nums->column_b[i + 1])
		i++;
	correct_pos(nums, i + 1);
	while (nums->b_n_args > 0)
		pa(nums); */
}

/* en vez de ordenar los numeros en b y luego pasarlos a a, irlos ordenando mientras
los paso a a. */