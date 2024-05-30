/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edieliu <edieliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 10:44:21 by edieliu           #+#    #+#             */
/*   Updated: 2024/05/07 21:01:19 by edieliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

int     ft_putchar(char c);
int     ft_putstr(char *s);
int     ft_putptr(uintptr_t n);
int     ft_putnbr(int n);
int     ft_putunbr(unsigned int n);
int     ft_puthex_lowercase(unsigned int n);
int     ft_puthex_uppercase(unsigned int n);
int     ft_format(va_list args, const char format);
int     ft_printf(const char *str, ...);

#endif