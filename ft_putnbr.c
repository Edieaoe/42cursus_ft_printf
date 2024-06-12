/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 10:35:30 by edieliu           #+#    #+#             */
/*   Updated: 2024/06/12 22:16:06 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	intlen(int n)
{
	long	longnum;
	int		len;

	longnum = n;
	len = 0;
	if (longnum < 0)
	{
		longnum *= -1;
		len++;
	}
	if (longnum == 0)
		len = 1;
	while (longnum > 0)
	{
		longnum /= 10;
		len++;
	}
	return (len);
}

int	ft_putnbr(int n)
{
	long int	num;

	num = n;
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
		ft_putchar(num + '0');
	return (intlen(n));
}
