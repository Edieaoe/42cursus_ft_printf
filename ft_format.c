/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 21:57:41 by edieliu           #+#    #+#             */
/*   Updated: 2024/06/16 16:30:00 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, const char format)
{
	int	result_length;

	result_length = 0;
	if (format == 'c')
		result_length += ft_putchar(va_arg(args, int));
	if (format == 's')
		result_length += ft_putstr(va_arg(args, char *));
	if (format == 'p')
		result_length += ft_putptr(va_arg(args, uintptr_t));
	if (format == 'd')
		result_length += ft_putnbr(va_arg(args, int));
	if (format == 'i')
		result_length += ft_putnbr(va_arg(args, int));
	if (format == 'u')
		result_length += ft_putunbr(va_arg(args, unsigned int));
	if (format == 'x')
		result_length += ft_puthex_lowercase(va_arg(args, unsigned int));
	if (format == 'X')
		result_length += ft_puthex_uppercase(va_arg(args, unsigned int));
	if (format == '%')
		result_length += write(1, "%", 1);
	return (result_length);
}
