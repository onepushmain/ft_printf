/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:06:41 by luizfern          #+#    #+#             */
/*   Updated: 2021/08/12 20:49:41 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// testes inicias com ft_printf

# include "libftprintf.h"
# include <stdio.h>

int	_global_verifier(int format, va_list c)
{
	int contador;

	if (format == 'c')
		contador = _c_verifier(va_arg(c, int));
	else if (format == 's')
		contador = _s_verifier(va_arg(c, char *));
	else if (format == 'd' || format == 'i')
		contador = _di_verifier(va_arg(c, int));
	else if (format == 'u')
		contador = _u_verifier(va_arg(c, size_t));
	else
		contador = 0;
	return (contador);
}

int	ft_printf(const char *string, ...)
{
	va_list args;
	int char_print;
	int count;

	count = 0;
	char_print = 0;
	va_start(args, string);
	while (string[count])
	{
		if (string[count] == '%' && 
				ft_strchr("cspdiux%", string[count+1]))
		{
			char_print += _global_verifier(string[count+1], args);
			count+=2;
		}
		else
			char_print += write(1, &string[count++], 1);
	}
	va_end(args);
	return (char_print);
}
