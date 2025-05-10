/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaghdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:38:35 by mnaghdal          #+#    #+#             */
/*   Updated: 2025/04/04 15:41:38 by mnaghdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuint(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 4294967295)
		len += ft_putstr("4294967295");
	else if (n >= 10)
	{
		len += ft_putuint(n / 10);
		len += (ft_putchar(n % 10 + '0'));
	}
	else
		len += (ft_putchar(n + '0'));
	return (len);
}
