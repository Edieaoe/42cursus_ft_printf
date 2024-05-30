/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edieliu <edieliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 22:13:55 by edieliu           #+#    #+#             */
/*   Updated: 2024/05/07 20:47:56 by edieliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
    int result_length;
    int i;
    va_list args;

    result_length = 0;
    i = 0;
    va_start(args, str);
    while (str[i])
    {
        if (str[i] == '%')
        {
            result_length = ft_format(args, str[i+1]);
            i++;
        }
        else
            ft_putchar(str[i]);
        i++;
    }
    va_end(args);
    return (result_length);
}