/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaghdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:35:56 by mnaghdal          #+#    #+#             */
/*   Updated: 2025/04/03 15:38:20 by mnaghdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int	len;

	len = 0;
	if (!ptr)
	{
		return (ft_putstr("(nil)"));
	}
	ft_putstr("0x");
	len += 2;
	len += ft_puthex((unsigned long)ptr, 'x');
	return (len);
}
