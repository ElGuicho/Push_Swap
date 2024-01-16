/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:59:39 by gmunoz            #+#    #+#             */
/*   Updated: 2024/01/16 19:09:58 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//#include "Libft/libft.h"

int	push_swap(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc < 2)
		return (0);
	while (i < (argc - 1))
	{
		j = 0;
		if ((argv[i][j] == '-') || (argv[i][j] == '+'))
			j++;
		while (argv[i])
		{
			if (ft_isdigit(argv[i][j]) == 1)
				j++;
			else if ((argv[i][j] == ' ') && (ft_isdigit(argv[i][j + 1]) == 1))
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}