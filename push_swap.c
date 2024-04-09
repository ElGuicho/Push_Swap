/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:59:39 by gmunoz            #+#    #+#             */
/*   Updated: 2024/04/09 15:24:21 by gmunoz           ###   ########.fr       */
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

int	digits_in_nb(char *arg_w_spc, int i, int arg_len)
{
	int	j;

	j = 0;
	while (arg_w_spc[i] != ' ' && i < arg_len)	
	{
		i++;
		j++;
	}
	return (j);
}

int	arg_space(swap_list *nums, char *arg_w_spc, int nargs_in_lst, int i)
{
	int arg_len;
	char	*start_nb;

	arg_len = ft_strlen(arg_w_spc);
	nums->column_a[nargs_in_lst] = ft_atoi(arg_w_spc);
	//printf ("inttolst = %d\n", nums->column_a[nargs_in_lst]);
	//printf ("nargs_in_lst = %d\n", nargs_in_lst);
	//printf ("strlen = %ld\n", ft_strlen(arg_w_spc));
	
	nargs_in_lst++;
	i = i + digits_in_nb(arg_w_spc, i, arg_len);
	while (i < arg_len)
	{
		//printf ("arg_w_spc = %c\n", arg_w_spc[i]);
		while (arg_w_spc[i - 1] != ' ' && arg_w_spc[i] != '\0')
		{
			i++;
			//printf ("arg_w_spc_loop = %c\n", arg_w_spc[i]);
		}
		
		//printf ("arg_w_spc_after = %c\n", arg_w_spc[i]);
		start_nb = arg_w_spc + i;
		//printf ("start_nb = %c\n", start_nb[0]);
		nums->column_a[nargs_in_lst] = ft_atoi(start_nb);
		//printf ("i before adding digits = %d\n", i);
		i = i + digits_in_nb(arg_w_spc, i, arg_len);
		nargs_in_lst++;
		//printf ("nargs = %d and i = %d\n", nargs_in_lst, i);
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
				//printf ("argv before arg_space = %s\n", argv[i]);
				nargs_in_lst = arg_space(nums, argv[i], nargs_in_lst, 0) - 1;
				//printf ("args in lst after arg_space = %d\n", nargs_in_lst);
				has_space = 1;
				break ;
			}
			j++;
		}
		//printf ("argv before inttolst = %s\n", argv[i]);
		//printf ("has_space = %d", has_space);
		if (has_space == 0)
			nums->column_a[nargs_in_lst] = ft_atoi(argv[i]);
		//printf ("after inttolst = %d\n", nums->column_a[nargs_in_lst]);
		nargs_in_lst++;
		i++;
	}
}

int in_order(swap_list *nums, int *n)
{
	int	i;

	i = 1;
	while (i < nums->n_args && n[i - 1] < n[i])
		i++;
	if (nums->n_args == i)
		return (1);
	return (0);
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
	nums->column_a = malloc(sizeof(int *));
	if (nums->column_a == NULL)
		return (free(nums), 0);
	nums->column_b = malloc(sizeof(int *));
	if (nums->column_b == NULL)
		return (free(nums), 0);
	nums->n_args = n_args;
	nums->b_n_args = 0;
	argtoint(nums, argc, argv, i);
	if (in_order(nums, nums->column_a) == 1)
		return (1);
	if (n_args <= 3)
		move3(nums, nums->column_a);
	else if (n_args <= 5 && n_args > 3)
		move5(nums, nums->column_a);
	/*else if (n_args <= 100 && n_args > 5)
		return (move100(argc, argv));
	else if (n_args <= 500 && n_args > 100)
		return (move500(argc, argv)); */
	return (1);
}
