/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:55:11 by dacastil          #+#    #+#             */
/*   Updated: 2024/11/22 16:48:10 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(void *pr)
{
	int	j;

	j = 0;
	if (!pr)
		return (ft_putstr("(nil)"));
	j += ft_putstr("0x");
	j += ft_puthex((unsigned long)pr, 'x');
	return (j);
}
