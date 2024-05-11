/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 09:29:16 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/04/11 12:56:57 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, char fmt)
{
	int	num;

	num = 0;
	if (fmt == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (fmt == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (fmt == 'd')
		return (ft_print_num(va_arg(args, int)));
	else if (fmt == 'x' || fmt == 'X')
		return (ft_hex(va_arg(args, unsigned int), fmt));
	else if (fmt == 'p')
		return (ft_print_ptr(va_arg(args, void *), 'x'));
	else if (fmt == 'i')
		return (ft_print_num(va_arg(args, int)));
	else if (fmt == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	return (num);
}

int	ft_printf(const char *format, ...)
{
	unsigned int	i;
	unsigned int	len;
	va_list			args;

	len = 0;
	i = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			++i;
			if (format[i] == '%')
				len += write(1, &format[i], 1);
			else if (format[i] != '\0')
				len += ft_format(args, format[i]);
		}
		else
			len += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}

// #include <stdio.h>

// int	main()
// {
// 	char	*str;
// 	ft_printf("%p", str);
// }