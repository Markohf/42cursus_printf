/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr_pf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:02:59 by marco-fe          #+#    #+#             */
/*   Updated: 2023/08/02 12:35:26 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Prints a str and increase the return of ft_printf, both, using putchar_fd.*/

#include "ft_printf.h"

void	putstr_pf(char *str, size_t *len)
{
	size_t	i;

	i = 0;
	if (!str)
		str = "(null)";
	while (str[i] != '\0')
	{
		putchar_pf(str[i], len);
		i++;
	}
}
