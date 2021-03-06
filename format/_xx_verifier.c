/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _xx_verifier.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <lfluiz.lf@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 18:11:42 by luizfern          #+#    #+#             */
/*   Updated: 2021/08/15 03:23:24 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	_xx_verifier(unsigned int x, char **string)
{
	int		counter;
	char	*str;

	counter = 0;
	*string = ft_utoh(x);
	str = *string;
	while (str[counter])
	{
		str[counter] = ft_toupper(str[counter]);
		write(1, &str[counter++], 1);
	}
	return (counter);
}
