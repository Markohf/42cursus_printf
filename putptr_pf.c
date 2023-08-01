/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putptr_pf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco_fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 11:04:26 by marco-fe          #+#    #+#             */
/*   Updated: 2023/07/31 11:05:31 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Prints a pointer in hexadecimal, increase the return of ft_printf.*/

#include "lib_pf.h"

void    putptr_pf(void *ptr, size_t *len)
{
    unsigned long   ptr_address;
    char            *str;

    ptr_address = (unsigned long)ptr;
    putstr_pf("0x", len);
    str = aux1_pf(ptr_address, "0123456789abcdef");
    putstr_pf(str, len);
    free(str);
}