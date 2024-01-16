/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:56:55 by gmunoz            #+#    #+#             */
/*   Updated: 2024/01/15 19:20:45 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

int	countn(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		i;

	if (n < 0)
	{
		if (write(1, "-", 1) == -1)
			return (NULL);
		n = -n;
	}
	i = countn(n);
	ptr = ft_calloc(i + 1, 1);
	if (!ptr)
		return (NULL);
	ptr[i] = '\0';
	i--;
	while (n != 0)
	{
		ptr[i] = (n % 10) + '0';
		i--;
		n /= 10;
	}
	return (ptr);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	int		i;

	i = 0;
	ptr = (void *)malloc(size * count);
	if (!ptr)
		return (NULL);
	while (i < (int)(count * size))
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (write(fd, (const void *)&s[i], 1) == -1)
			return (-1);
		i++;
	}
	return (ft_strlen(s));
}
