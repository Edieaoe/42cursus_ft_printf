/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 21:21:39 by edieliu           #+#    #+#             */
/*   Updated: 2024/06/12 22:18:46 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hexlen(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n > 0)
	{
		n /= 16;
		len++;
	}
	return (len);
}

int	ft_puthex_lowercase(unsigned int n)
{
	if (n > 15)
	{
		ft_puthex_lowercase(n / 16);
		ft_puthex_lowercase(n % 16);
	}
	else
		ft_putchar("0123456789abcdef"[n]);
	return (hexlen(n));
}

int	ft_puthex_uppercase(unsigned int n)
{
	if (n > 15)
	{
		ft_puthex_uppercase(n / 16);
		ft_puthex_uppercase(n % 16);
	}
	else
		ft_putchar("0123456789ABCDEF"[n]);
	return (hexlen(n));
}
