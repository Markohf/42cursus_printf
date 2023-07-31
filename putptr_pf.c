/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointhex_pf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco_fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 11:04:26 by marco-fe          #+#    #+#             */
/*   Updated: 2023/07/31 11:05:31 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Prints a pointer in hexadecimal, increase the return of ft_printf.*/

#include "lib_pf.h"

void    putptr_pf(unsigned int ptr, size_t *len)
{
    putstr("0x", len);
}