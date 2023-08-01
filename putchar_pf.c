/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putchar_pf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 19:42:58 by marco-fe          #+#    #+#             */
/*   Updated: 2023/07/28 19:52:32 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Prints a char and increase the return of ft_printf.*/

#include "lib_pf.h"

void	putchar_pf(int	c, size_t *len)
{
	write(1, &c, 1);
	(*len)++;
}
