/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 22:24:43 by yachehbo          #+#    #+#             */
/*   Updated: 2021/11/25 22:43:15 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

void	ft_putstr(char *str, int *cp)
{
	int	i;

	if (!str)
	{
		ft_putstr("(null)", cp);
		return ;
	}
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i], cp);
		i++;
	}
}
