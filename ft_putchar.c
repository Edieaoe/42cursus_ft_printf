/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edieliu <edieliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 10:35:33 by edieliu           #+#    #+#             */
/*   Updated: 2024/05/05 11:03:35 by edieliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putchar(char c)
{
    return (write(1, &c, 1));
}

// int main()
// {
//     printf("%d\n", ft_putchar('a'));
//     printf("%d\n", ft_putchar('a'));
//     return (0);
// }