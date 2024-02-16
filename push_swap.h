/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:46:57 by gmunoz            #+#    #+#             */
/*   Updated: 2024/02/16 18:31:24 by gmunoz           ###   ########.fr       */
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
	int	*nums;
	int	*intargs;
	int	n_args;
}	swap_list;

int	push_swap(int argc, char **argv);
int move3(swap_list *nums, int *intargs);
int move5(int argc, char **argv);
int move100(int argc, char **argv);
int move500(int argc, char **argv);

#endif