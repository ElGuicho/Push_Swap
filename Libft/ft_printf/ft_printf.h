/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmunoz <gmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:04:11 by gmunoz            #+#    #+#             */
/*   Updated: 2024/01/16 14:23:07 by gmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

# define HEXALOWER	"0123456789abcdef"
# define HEXAUPPER	"0123456789ABCDEF"

int		ft_printf(const char *str, ...);

//utils
int		ft_strlen(const char *str);
char	*ft_itoa(int n);
void	*ft_calloc(size_t count, size_t size);
int		ft_putstr_fd(char *s, int fd);
int		countn(unsigned int n);

//formats
int		ifchar(va_list args, int i);
int		ifstr(va_list args, int i);
int		ifptr(va_list args, int i);
int		ifdec(va_list args, int i);
int		ifdecns(va_list args, int i);
int		ifhexa(va_list args, int i);
int		ifhexa_caps(va_list args, int i);

//hexadecimal conversion
char	*ptr_to_hexa(unsigned long str);
char	*dec_to_hexalower(unsigned int str);
char	*dec_to_hexaupper(unsigned int str);

#endif
