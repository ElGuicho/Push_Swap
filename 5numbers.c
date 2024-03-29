/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5numbers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:13:04 by gmunoz            #+#    #+#             */
/*   Updated: 2024/03/29 22:21:38 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move5(swap_list *nums, int *n)
{
	if (nums->n_args == 4)
	{
		if (n[0] < n[1] && n[0] < n[2] && n[0] < n[3] && n[1] < n[2]
			&& n[1] < n[3] && n[2] < n[3])
		{
			write (1, "Already in order\n", 17);
			return ;
		}
		if (n[0] > n[1] && n[1] < n[2] && n[1] < n[3])
		{
			n[1] = n[3];
			n[3] = n[0];
			n[0] = n[2];
			n[2] = n[3];
			write(1, "ra\n", 3);
		}
		if (n[0] > n[2] && n[1] > n[2] && n[2] < n[3])
		{
			n[2] = n[1];
			n[1] = n[0];
			n[0] = n[3];
			write(1, "ra\nra\n", 6);
		}
		if (n[0] > n[3] && n[1] > n[3] && n[2] > n[3])
			write(1, "rra\n", 4);
		write (1, "pb\n", 3);
		nums->n_args = 3;
		move3(nums, n);
		write (1, "pa\n", 3);
	}
	
}

		/*write (1, "pb\n", 3);
		if (n[0] > n[1] && n[0] < n[2])
			write(1, "sa\npa\n", 6);
		else if (n[0] > n[1] && n[1] < n[2])
			write(1, "ra\npa\n", 6);
		else if (n[0] > n[1])
			write(1, "ra\nsa\npa\n", 9);
		else if (n[0] > n[2])
			write(1, "rra\npa\n", 7);
		else if (n[0] < n[2])
			write(1, "sa\nra\npa\n", 9); */
/*
1	3	4	1	1	1	3	0
3	1	2	2	1	1	4	1
2	4	1	3	2	3	2	2
1	2	3	1	3	2		3

Completed
------------------------ */
