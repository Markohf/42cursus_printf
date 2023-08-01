/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux1_pf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 17:54:55 by marco-fe          #+#    #+#             */
/*   Updated: 2023/07/28 19:00:23 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_pf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*p_b;

	i = 0;
	p_b = s;
	while (i < n)
	{
		p_b[i] = '\0';
		i++;
	}
}

void	*ft_calloc(unsigned int count, unsigned int size)
{
	unsigned int	tot;
	void			*buff;

	tot = count * size;
	buff = malloc(tot);
	if (!buff)
		return (NULL);
	ft_bzero(buff, tot);
	return (buff);
}

char    *aux1_pf(unsigned long ptr_address, char *base)
{
    char    *str;

    str = ft_calloc(ft_strlen(base) + 1, sizeof (char));
    if (!str)
        return (NULL);
    while ()
    {

    }
    return (str);
}