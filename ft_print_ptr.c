/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 11:58:10 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/04/11 12:53:23 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_adr(void *nbr, const char format)
{
	const char		*case_format;
	int				len;
	unsigned long	ptr;

	len = 0;
	ptr = (unsigned long) nbr;
	if (format == 'x')
		case_format = "0123456789abcdef";
	if (ptr < 16)
		len += ft_print_char(case_format[ptr]);
	else
	{
		len += ft_adr((void *)(ptr / 16), format);
		len += ft_adr((void *)(ptr % 16), format);
	}
	return (len);
}

int	ft_print_ptr(void *nbr, const char format)
{
	int			len;

	len = 0;
	if (nbr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	len += write(1, "0x", 2);
	len += ft_adr(nbr, format);
	return (len);
}

// int	main()
// {
// 	// int 	x = 10000; 
// 	// char	*str = "aaaaaaaaaaaaa";
// 	// char	c = 'B';

// 	// printf(" || D : %d\n", printf("P : %p", &str));
// 	// printf(" || D : %d\n",printf("P : %p", &str));
// 	// printf(" || D : %d\n", printf("P : %p", &str));
// 	// ft_printf("%p", 16);
// 	ft_printf("%p", 33);	// printf("%d", ft_printf("%p\n", 100));
// }