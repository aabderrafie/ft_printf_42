/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaskal <aaskal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 12:29:13 by aaskal            #+#    #+#             */
/*   Updated: 2024/01/10 15:13:36 by aaskal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <limits.h>
# include <stdarg.h>
// # include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_printchar(char c);
int		ft_printstr(char *str);
int		ft_printint(int i);
int		ft_printuint(unsigned int i);
size_t	ft_printx(size_t i, char c);
int		ft_numlen(long n);
int		ft_numlen_hex(size_t n);
int		ft_isdigit(int c);
int		handle_hash_flag(const char *format, va_list args, int *i);
int		handle_space_flag(const char *format, va_list args, int *i);
int		handle_plus_flag(const char *format, va_list args, int *i);
int		print_spaces(int width, int num_spaces);
int		ft_strlen(const char *str);
#endif
