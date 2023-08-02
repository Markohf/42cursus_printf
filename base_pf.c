/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base_pf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 17:54:55 by marco-fe          #+#    #+#             */
/*   Updated: 2023/08/02 12:24:54 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Prints an unsigned long in a given base, increase the return of ft_printf.*/

#include "ft_printf.h"

void	base_pf(unsigned long val, char *base, int base_len, size_t *len)
{
	char	c;

	if (val < (unsigned long)base_len)
	{
		c = base[val];
		putchar_pf(c, len);
	}
	else
	{
		base_pf(val / base_len, base, base_len, len);
		base_pf(val % base_len, base, base_len, len);
	}
}
