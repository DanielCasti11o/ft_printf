/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:45:14 by dacastil          #+#    #+#             */
/*   Updated: 2024/11/19 20:25:13 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr(int num)
{
	long	n;
	int		ln;

	ln = 0;
	n = num;
	if (num < 0)
	{
		ft_putchar('-');
		n = -n;
		ln++;
	}
	if (n >= 10)
	{
		ln = ln + ft_putnbr(n / 10);
	}
	ft_putchar((n % 10) + '0');
	return (ln);
}
