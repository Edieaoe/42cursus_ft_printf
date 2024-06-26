/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 10:44:21 by edieliu           #+#    #+#             */
/*   Updated: 2024/06/16 16:39:45 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdint.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putptr(uintptr_t n);
int	ft_putnbr(int n);
int	ft_putunbr(unsigned int n);
int	ft_puthex_lowercase(unsigned int n);
int	ft_puthex_uppercase(unsigned int n);
int	ft_format(va_list args, const char format);
int	ft_printf(const char *str, ...);

#endif
