/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putint_pf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco_fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 11:04:26 by marco-fe          #+#    #+#             */
/*   Updated: 2023/07/31 11:05:31 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Prints an int, increase the return of ft_printf.*/

#include "lib_pf.h"

void    putint_pf(int num, size_t *len)
{
    if (num == -2147483648)
		putstr_pf("-2147483648", len);
	else
	{	
        if (num < 0)
        {
            num = -num;
            putchar_pf('-', len);
        }
        if (num < 10)
            putchar_pf(num + '0', len);
        else
        {
            putint_pf(num / 10, len);
            putint_pf(num % 10, len);
        }
    }
}