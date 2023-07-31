/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:02:59 by marco-fe          #+#    #+#             */
/*   Updated: 2023/07/28 20:04:08 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Prints a str and increase the return of ft_printf, both, using putchar_fd.*/

#include "lib_pf.h"

void	putstr_pf(char *str, size_t *len)
{
    size_t  i;

    i = 0;
    if (!str)
        str = "(null)";
    while (str[i] != '\0')
    {
        putchar_fd(str[i], len);
        i++;
    }
}
