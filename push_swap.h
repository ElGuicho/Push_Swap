/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:46:57 by gmunoz            #+#    #+#             */
/*   Updated: 2024/04/09 13:47:01 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "Libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

typedef  struct push_list
{
	int	*column_a;
	int	*column_b;
	int	n_args;
	int	b_n_args;
	int	ss;
	int	rr;
	int	rrr;
}	swap_list;

int	push_swap(int argc, char **argv);
void	sa(swap_list *nums);
void	sb(swap_list *nums);
void	ss(swap_list *nums);
void	ra(swap_list *nums);
void	rb(swap_list *nums);
void	rr(swap_list *nums);
void	rra(swap_list *nums);
void	rrb(swap_list *nums);
void	rrr(swap_list *nums);
void	pa(swap_list *nums);
void	pb(swap_list *nums);
void	move3(swap_list *nums, int *n);
void	move5(swap_list *nums, int *n);
int move100(swap_list *nums, int *n);
int move500(swap_list *nums, int *n);

#endif