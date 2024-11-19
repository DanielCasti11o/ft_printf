/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:52:24 by dacastil          #+#    #+#             */
/*   Updated: 2024/11/19 20:40:37 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(int num)
{
	long	n;
	int		ln;

	ln = 0;
	n = num;
	if (num < 0)
	{
		return ("null");
	}
	if (n >= 10)
	{
		ln = ln + ft_putnbr(n / 10);
	}
	ft_putchar((n % 10) + '0');
	return (ln);
}
