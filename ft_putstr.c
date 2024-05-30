/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edieliu <edieliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 10:51:54 by edieliu           #+#    #+#             */
/*   Updated: 2024/05/06 09:24:44 by edieliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_strlen(char* s)
{
    int i;

    i = 0;
    while (!s[i])
        i++;
    return (i);
}

int ft_putstr(char* s)
{
    if (s == NULL)
        return (write(1, "(null)", 6));
    return (write(1, s, ft_strlen(s)));
}