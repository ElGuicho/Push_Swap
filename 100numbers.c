/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   100numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:13:11 by gmunoz            #+#    #+#             */
/*   Updated: 2024/04/17 19:40:20 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move100(swap_list *nums)
{
	int	i;
	int	j;
	int	k;
	int	sort5;
	int	b;
	
	b = 1;
	i = nums->n_args;
	sort5 = i - 15;
	k = 0;
	j = nums->n_args;
	while (j > 0)
	{
		ft_printf("colummn a[%d] = %d\n", k, nums->column_a[k]);
		k++;
		j--;
	}
	while (i > 0)
	{
		pb(nums);
		i--;
	}
	k = 0;
	j = nums->b_n_args;
	while (j > 0)
	{
		ft_printf("column b 1[%d] = %d\n", k, nums->column_b[k]);
		k++;
		j--;
	}
	sort_nums(nums);
	num_position(nums);
	while (nums->b_n_args - 1 != 0)
	{
		while (b != 5)
		{
			if (nums->column_b[i] >= sort5)
			{
				if (nums->column_b[0] >= sort5)
					pa(nums);
				else
				{
					while (nums->column_b[0] < sort5)
					{
						if (i < nums->b_n_args / 2)
							rb(nums);
						else
							rrb(nums);	
					}
					pa(nums);
				}
				b++;
			}
			i++;
			if (b == 5)
				move5(nums, nums->column_a);
		}
		sort5 -= 5;
		b = 1;
	}
	// pa the 5 lowest numbers and execute move5 although you first have to move
	// all numbers to column b
}
