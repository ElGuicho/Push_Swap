/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   100numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:13:11 by gmunoz            #+#    #+#             */
/*   Updated: 2024/04/24 18:20:57 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move100(swap_list *nums)
{
	int	i;
	int	sort5;
	int	b;
	
	b = 0;
	i = nums->n_args;
	sort5 = i - 5;
	//ft_printf("sort5 = %d\n", sort5);
	while (i > 0)
	{
		pb(nums);
		i--;
	}
	sort_nums(nums, nums->column_b);
	num_position(nums);
	while (nums->b_n_args != 0)
	{
		while (b != 5)
		{
			if (sort5 < 0)
			{
				last_nbs(nums, sort5 + 5);
				return ;
			}
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
		}
		hundred_move5(nums, nums->column_a, 5);
		sort5 -= 5;
		b = 0;
	}
}
