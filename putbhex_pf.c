/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putbhex_pf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco_fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 11:04:26 by marco-fe          #+#    #+#             */
/*   Updated: 2023/08/02 12:34:28 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Prints an unsigned int in base 16 in minusc or mayusc,
 * increase the return of ft_printf.*/

#include "ft_printf.h"

void	putbhex_pf(unsigned int num, char ind, size_t *len)
{
	unsigned long	num_ui;

	num_ui = (unsigned long)num;
	if (ind == 'x')
		base_pf(num_ui, "0123456789abcdef", 16, len);
	else if (ind == 'X')
		base_pf(num_ui, "0123456789ABCDEF", 16, len);
}
