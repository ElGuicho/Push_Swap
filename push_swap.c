/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:59:39 by gmunoz            #+#    #+#             */
/*   Updated: 2024/02/13 17:54:19 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	arg_chek(int argc, char **argv, int i)
{
	int	j;

	j = 0;
	while (i < argc)
	{
		j = 0;
		if (((argv[i][j] == '-') || (argv[i][j] == '+'))
			&& (ft_isdigit(argv[i][j + 1]) == 1))
			j++;
		while (argv[i][j] != '\0')
		{
			if (ft_isdigit(argv[i][j]) == 1)
				j++;
			else if (argv[i][j] == ' ')
			{
				j++;
				if ((argv[i][j] == '-') || (argv[i][j] == '+'))
					j++;
			}
			else
				return (0);
		}
		i++;
	}
	return (1);
}

int	arg_count(int argc, char **argv, int i)
{
	int	j;
	int	n_args;

	j = 0;
	n_args = 0;
	if (argc == 0 || arg_chek(argc, argv, i) == 0)
		return (0);
	i = 1;
	while (i < argc)
	{
		n_args++;
		j = 0;
		while (argv[i][j++] != '\0')
		{
			if (argv[i][j] == ' ')
				n_args++;
		}
		i++;
	}
	printf ("total: %d\n", n_args);
	return (n_args);
}
int	push_swap(int argc, char **argv)
{
	int	i;
	int n_args;

	i = 1;
	n_args = arg_count(argc, argv, i);
	if (n_args == 0)
		return (0);
	else if (n_args <= 3)
		return (move3(argc, argv));
	else if (n_args <= 3)
		return (move5(argc, argv));
	else if (n_args <= 3)
		return (move100(argc, argv));
	else if (n_args <= 3)
		return (move500(argc, argv));
	return (1);
}
