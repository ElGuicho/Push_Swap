/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3numbers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:12:51 by gmunoz            #+#    #+#             */
/*   Updated: 2024/03/29 19:47:36 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int move3(swap_list *nums, int *n)
{
	if (nums->n_args == 2 && n[0] > n[1])
		return(write(1, "sa\n", 3));
	else if (nums->n_args == 3)
	{
		if (n[0] > n[1] && n[0] < n[2])
			return (write(1, "sa\n", 3), 1);
		if (n[0] > n[1] && n[1] < n[2])
			return (write(1, "ra\n", 3));
		if (n[0] > n[1])
			return (write(1, "ra\nsa\n", 6));
		if (n[0] > n[2])
			return (write(1, "rra\n", 4));
		if (n[0] < n[2])
			return (write(1, "sa\nra\n", 6));
	}
	write(1, "Already in order\n", 17);
	return (1);
}

/*
Completed
------------------------
5	8	8	5	3
3	3	5	8	8
8	5	3	3	5 
*/