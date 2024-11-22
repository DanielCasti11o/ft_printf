/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 20:17:41 by dacastil          #+#    #+#             */
/*   Updated: 2024/11/22 16:51:17 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_cases(va_list args, char c)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int));
	else if (c == 's')
		ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		ft_putpointer(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		ft_putunbr(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		ft_puthex(va_arg(args, unsigned int), c);
	else if (c == '%')
		ft_putchar('%');
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		ln;

	i = 0;
	ln = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			ft_cases(args, str[i + 1]);
			i++;
		}
		else
			ln += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (ln);
}
