/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base_pf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 17:54:55 by marco-fe          #+#    #+#             */
/*   Updated: 2023/07/28 19:00:23 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Prints an unsigned long in a given base, increase the return of ft_printf.*/

#include "lib_pf.h"

void	base_pf(unsigned long val, char *base, int base_len, size_t *len)
{
	char	c;

	if (val < base_len)
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