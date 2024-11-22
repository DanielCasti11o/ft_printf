/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:29:56 by dacastil          #+#    #+#             */
/*   Updated: 2024/11/22 16:47:16 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c);

int	ft_puthex(unsigned long num, char c)
{
	char	*hex;
	int		ln;

	ln = 0;
	if (c == 'X')
		hex = "0123456789ABCDEF";
	else if (c == 'x')
		hex = "0123456789abcdef";
	else
		return (0);
	if (num >= 16)
		ln = ln + ft_puthex(num / 16, c);
	ln = ln + ft_putchar(hex[num % 16]);
	return (ln);
}
// {int main()
// {
// 	printf("%X", ft_puthex(12566, 7, 'X'));
// 	return 0;
// }}
