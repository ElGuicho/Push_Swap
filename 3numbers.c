/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3numbers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:12:51 by gmunoz            #+#    #+#             */
/*   Updated: 2024/04/17 13:22:37 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move3(swap_list *nums, int *n)
{
	if (nums->n_args == 2 && n[0] > n[1])
		sa(nums);
	if (n[0] > n[1] && n[0] < n[2])
		sa(nums);
	else if (n[0] > n[1] && n[1] < n[2])
		ra(nums);
	else if (n[0] > n[1])
	{
		ra(nums);
		sa(nums);
	}
	else if (n[0] > n[2])
		rra(nums);
	else if (n[0] < n[2])
	{
		sa(nums);
		ra(nums);
	}
}

/*
Completed	1 2 0
------------------------
5	8	8	5	3
3	3	5	8	8
8	5	3	3	5 
*/