/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_pf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 17:01:42 by marco-fe          #+#    #+#             */
/*   Updated: 2023/07/28 19:00:53 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_PF_H
# define LIB_PF_H

# include <stdlib.h>
# include <unistd.h>
# include <ctype.h>
# include <stdio.h>
# include <stdarg.h>

/*Main function*/
int	    ft_printf(char const *str, ...);

/*Format functions*/
void	putchar_pf(int	c, size_t *len);
void	putstr_pf(char *str, size_t *len);
void    putptr_pf(void *ptr, size_t *len);
void    putint_pf(int num, size_t *len);
void    putbdec_pf(unsigned int num, size_t *len);
void    putbhex_pf(unsigned int num, char *str, size_t *len);

/*Aux function*/
void	base_pf(unsigned long val, char *base, int base_len, size_t *len);

#endif
