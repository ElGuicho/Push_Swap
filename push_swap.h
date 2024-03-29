/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:46:57 by gmunoz            #+#    #+#             */
/*   Updated: 2024/03/29 21:40:29 by gmunoz           ###   ########.fr       */
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
	int	*intargs;
	int	n_args;
}	swap_list;

int	push_swap(int argc, char **argv);
void	move3(swap_list *nums, int *n);
void	move5(swap_list *nums, int *n);
int move100(swap_list *nums, int *n);
int move500(swap_list *nums, int *n);

#endif