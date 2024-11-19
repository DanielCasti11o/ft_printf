/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 20:17:38 by dacastil          #+#    #+#             */
/*   Updated: 2024/11/19 21:28:20 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	ln;

	ln = 0;
	if (!*s)
		s = "(null)";
	while (s[ln])
	{
		write (1, &s[ln], 1);
		ln++;
	}
	return (ln);
}
