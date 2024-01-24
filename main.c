/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:47:35 by gmunoz            #+#    #+#             */
/*   Updated: 2024/01/24 14:01:12 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//#include "Libft/libft.h"

int	main(int argc, char **argv)
{
	if (push_swap(argc, argv) == 1)
		write(1, "OK", 2);
	else
		write(1, "Error\n", 6);
	return (0);
}
