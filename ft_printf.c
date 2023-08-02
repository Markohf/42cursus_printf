/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 17:48:11 by marco-fe          #+#    #+#             */
/*   Updated: 2023/08/02 12:37:22 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This program imitates the function printf using variadic functions.*/

#include "ft_printf.h"

/*Prints and increases the return of ft_printf according
 * to the format.*/
void	format_pf(va_list args, char ind, size_t *len)
{
	if (ind == 'c')
		putchar_pf(va_arg(args, int), len);
	else if (ind == 's')
		putstr_pf(va_arg(args, char *), len);
	else if (ind == 'p')
		putptr_pf(va_arg(args, void *), len);
	else if (ind == 'd' || ind == 'i')
		putint_pf(va_arg(args, int), len);
	else if (ind == 'u')
		putbdec_pf(va_arg(args, unsigned int), len);
	else if (ind == 'x' || ind == 'X')
		putbhex_pf(va_arg(args, unsigned int), ind, len);
	else if (ind == '%')
		putchar_pf('%', len);
}

/*The main body of the program, prints the string called str.
 * Returns the number of chars that are print.*/
int	ft_printf(char const *str, ...)
{
	va_list	args;
	size_t	len;
	size_t	i;

	if (!str)
		return (0);
	va_start(args, str);
	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != '\0')
			format_pf(args, str[++i], &len);
		else
			putchar_pf(str[i], &len);
		i++;
	}
	va_end(args);
	return (len);
}
