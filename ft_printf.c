/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 17:48:11 by marco-fe          #+#    #+#             */
/*   Updated: 2023/07/28 20:04:11 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_pf.h"

void	format_pf(va_list args, char *str, size_t *len)
{
	if (*str == 'c')
		putchar_pf(va_arg(args, int), len);
	else if (*str == 's')
		putstr_pf(va_arg(args, char *), len);
	else if (*str == 'p')
		p
	else if (*str == 'd')
		d
	else if (*str == 'i')
		i
	else if (*str == 'u')
		u
	else if (*str == 'x' || *str == 'X')
		xX
	else if (*str == '%')
		%
}

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
			format_pf(args, (char *)str[++i], &len);
		else
			putchar_pf(str[i], &len);
		i++;
	}
	va_end(args);
	return (len);
}
