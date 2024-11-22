/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:52:24 by dacastil          #+#    #+#             */
/*   Updated: 2024/11/22 16:48:31 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c);

int	ft_putunbr(unsigned long num)
{
	int		ln;

	ln = 0;
	if (num >= 10)
	{
		ln = ln + ft_putunbr(num / 10);
	}
	ln = ln + ft_putchar((num % 10) + '0');
	return (ln);
}
