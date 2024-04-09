/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5numbers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:13:04 by gmunoz            #+#    #+#             */
/*   Updated: 2024/04/09 15:56:02 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	four_args(swap_list *nums, int *n)
{
	if (n[0] > n[1] && n[1] < n[2] && n[1] < n[3])
		ra(nums);
	if (n[0] > n[2] && n[1] > n[2] && n[2] < n[3])
	{
		ra(nums);
		ra(nums);
	}
	if (n[0] > n[3] && n[1] > n[3] && n[2] > n[3])
		rra(nums);
	pb(nums);
	move3(nums, nums->column_a);
	pa(nums);
}

void	move5(swap_list *nums, int *n)
{
	if (nums->n_args == 4)
		four_args(nums, n);
	else if (n[0] < n[1] && n[0] < n[2] && n[0] < n[3] && n[0] < n[4])
		write (1, "pb\n", 3);
	else if (n[1] < n[0] && n[1] < n[2] && n[1] < n[3] && n[1] < n[4])
		write (1, "pb\n", 3);
	
}
