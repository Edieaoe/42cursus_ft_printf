/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edieliu <edieliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:53:27 by edieliu           #+#    #+#             */
/*   Updated: 2024/05/06 21:55:50 by edieliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ptrlen(uintptr_t n)
{
    int len;
    
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

void    ft_putptr_rec(uintptr_t n)
{
    if (n > 15)
    {
        ft_putptr_rec(n / 16);
        ft_putptr_rec(n % 16);
    }
    else
        ft_putchar("0123456789abcdef"[n]);
}

int ft_putptr(uintptr_t n)
{   
    write(1, "0x", 2);
    ft_putptr_rec(n);
    return (ptrlen(n) + 2);
}