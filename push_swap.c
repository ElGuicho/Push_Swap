/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:59:39 by gmunoz            #+#    #+#             */
/*   Updated: 2024/03/26 20:22:51 by gmunoz           ###   ########.fr       */
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
		while (argv[i][j] != '\0' || argv[i][0] == '\0')
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
				return (-1);
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
	if (argc == 0 || arg_chek(argc, argv, i) == -1)
		return (-1);
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
	printf ("total args: %d\n", n_args);
	return (n_args);
}

int	arg_space(swap_list *nums, char *arg_w_spc, int nargs_in_lst, int i)
{
	nums->intargs[nargs_in_lst] = ft_atoi(arg_w_spc);
	printf ("argv after inttolst = %d\n", nums->intargs[nargs_in_lst]);
	nargs_in_lst++;
	while (arg_w_spc[i] != '\0')
	{
		i = 1;
		while (arg_w_spc[i - 1] != ' ' || arg_w_spc[i] != '\0')
			i++;
		nums->intargs[nargs_in_lst] = ft_atoi(arg_w_spc + i);
		nargs_in_lst++;
	}
	return (nargs_in_lst);
}

void	argtoint(swap_list *nums, int argc, char **argv, int i)
{
	int	j;
	int	nargs_in_lst;
	int	has_space;

	nargs_in_lst = 0;
	j = 0;
	while (i < argc)
	{
	has_space = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] == ' ')
			{
				printf ("argv before arg_space = %s\n", argv[i]);
				nargs_in_lst = arg_space(nums, argv[i], nargs_in_lst, 0) - 1;
				has_space = 1;
				break ;
			}
			j++;
		}
		printf ("argv before inttolst = %s\n", argv[i]);
		if (has_space == 0)
			nums->intargs[nargs_in_lst] = ft_atoi(argv[i]);
		printf ("after inttolst = %d\n", nargs_in_lst);
		nargs_in_lst++;
		i++;
	}
}

int	push_swap(int argc, char **argv)
{
	int	i;
	int n_args;
	swap_list	*nums;

	i = 1;
	nums = malloc(sizeof(swap_list));
	if (!nums)
		return (0);
	n_args = arg_count(argc, argv, i);
	if (n_args == -1)
		return (free(nums), -1);
	nums->intargs = malloc(sizeof(n_args * int));
	if (nums->intargs == NULL)
		return (free(nums), 0);
	nums->n_args = n_args;
	argtoint(nums, argc, argv, i);
	/*if (n_args <= 3)
		move3(nums, nums->intargs);
	else if (n_args <= 5 && n_args > 3)
		return (move5(argc, argv));
	else if (n_args <= 100 && n_args > 5)
		return (move100(argc, argv));
	else if (n_args <= 500 && n_args > 100)
		return (move500(argc, argv)); */
	return (1);
}
