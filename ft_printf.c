/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 22:13:55 by edieliu           #+#    #+#             */
/*   Updated: 2024/06/13 21:59:10 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// return length?
// return(write(1, "%", 1))
// library?
// x/X unsighed int?
// s == NULL (null)
int	ft_printf(const char *str, ...)
{
	int		result_length;
	int		i;
	va_list	args;

	result_length = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			result_length += ft_format(args, str[i + 1]);
			i++;
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (result_length);
}
