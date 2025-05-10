/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaghdal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:42:51 by mnaghdal          #+#    #+#             */
/*   Updated: 2025/04/03 15:58:58 by mnaghdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_putchar(char c);
size_t	ft_strlen(char *s);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_putuint(unsigned int n);
int		ft_puthex(unsigned long n, char format);
int		ft_putptr(void *ptr);
int		fprint(va_list args, char form);
int		ft_printf(const char *format, ...);
#endif
