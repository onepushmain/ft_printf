/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 21:39:14 by luizfern          #+#    #+#             */
/*   Updated: 2021/08/14 00:24:30 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../libftprintf.h"

char	*ft_utoa(unsigned int n)
{
	char		*ptr_n;
	size_t		nb;
	size_t		i;
	size_t		size_ptr;

	i = 0;
	size_ptr = ft_size_ptr(n);
	ptr_n = (char *)calloc(sizeof(char), size_ptr + 1);
	if (!ptr_n)
		return (NULL);
	nb = n;
	ptr_n[size_ptr - i++] = '\0';
	while (nb >= 10)
	{
		ptr_n[size_ptr - i++] = (nb % 10) + '0';
		nb /= 10;
	}
	ptr_n[size_ptr - i++] = (nb % 10) + '0';
	return (ptr_n);
}