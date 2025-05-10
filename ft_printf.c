/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaghdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:59:50 by mnaghdal          #+#    #+#             */
/*   Updated: 2025/04/03 15:50:18 by mnaghdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	fprint(va_list arg, char form)
{
	int	len;

	len = 0;
	if (form == 'c')
		len += ft_putchar(va_arg(arg, int));
	else if (form == 's')
		len += ft_putstr(va_arg(arg, char *));
	else if (form == 'd' || form == 'i')
		len += ft_putnbr(va_arg(arg, int));
	else if (form == 'u')
		len += ft_putuint(va_arg(arg, unsigned int));
	else if (form == 'x' || form == 'X')
		len += ft_puthex((unsigned int)va_arg(arg, unsigned int), form);
	else if (form == 'p')
	{
		len += ft_putptr(va_arg(arg, void *));
	}
	else if (form == '%')
	{
		len += write(1, "%", 1);
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%')
			len += fprint(arg, format[++i]);
		else
			len += write(1, &format[i], 1);
		i++;
	}
	va_end(arg);
	return (len);
}
/* #include <stdio.h>
int	main(void)
{
	int	x = 0;
	// int	a = -218368;
	printf("%d\n", printf("%p \n", 0));
	ft_printf("%d\n", ft_printf("%p \n", 0));
	return (0);
} */
