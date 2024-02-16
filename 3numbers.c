/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3numbers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:12:51 by gmunoz            #+#    #+#             */
/*   Updated: 2024/02/16 18:31:02 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int move3(swap_list *nums, int *intargs)
{
	if (nums->n_args == 2 && ft_atoi(argv[1]) > ft_atoi(argv[2]))
		write(1, "sa\n", 3);
	else if (nums->n_args == 3)
	{
		if (ft_atoi(argv[1]) > ft_atoi(argv[2])
			&& ft_atoi(argv[2]) < ft_atoi(argv[3]))
			return (write(1, "ra\n", 3), 1);
		if (ft_atoi(argv[1]) > ft_atoi(argv[2]))
			write(1, "sa\n", 3);
		if (ft_atoi(argv[2]) > ft_atoi(argv[3]))
			write(1, "rra\n", 4);
		else if (ft_atoi(argv[1]) > ft_atoi(argv[3]))
			write(1, "ra\nsa\nrra\n", 10);
	}
	return (1);
}
