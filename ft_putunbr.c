/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 20:47:39 by edieliu           #+#    #+#             */
/*   Updated: 2024/06/12 22:17:03 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	unumlen(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	ft_putunbr(unsigned int n)
{
	unsigned int	num;

	num = n;
	if (num > 9)
	{
		ft_putunbr(num / 10);
		ft_putunbr(num % 10);
	}
	else
		ft_putchar(num + '0');
	return (unumlen(n));
}
