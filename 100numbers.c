/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   100numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:13:11 by gmunoz            #+#    #+#             */
/*   Updated: 2024/04/17 14:07:30 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move100(swap_list *nums)
{
	int	i;
	int	sort5;
	int	b;
	
	b = 1;
	i = nums->n_args - 1;
	sort5 = i - 5;
	while (i > 0)
	{
		pb(nums);
		i--;
	}
	sort_nums(nums);
	num_position(nums);
	while (nums->b_n_args != 0)
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
