/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putbdec_pf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco_fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 11:04:26 by marco-fe          #+#    #+#             */
/*   Updated: 2023/08/02 12:34:09 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Prints an unsigned int in base 10, increase the return of ft_printf.*/

#include "ft_printf.h"

void	putbdec_pf(unsigned int num, size_t *len)
{
	unsigned long	num_ui;

	num_ui = (unsigned long)num;
	base_pf(num_ui, "0123456789", 10, len);
}
