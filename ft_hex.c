/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 01:57:26 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/04/10 19:11:13 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned int nbr, const char format)
{
	const char	*case_format;
	int			len;

	len = 0;
	if (format == 'X')
		case_format = "0123456789ABCDEF";
	else if (format == 'x')
		case_format = "0123456789abcdef";
	if (nbr >= 16)
	{
		len += ft_hex(nbr / 16, format);
		len += ft_hex(nbr % 16, format);
	}
	else
		len += write(1, &case_format[nbr], 1);
	return (len);
}

// #include <stdio.h>

// int	main(void)
// {

// 	if (printf(" %x asd", 0) == ft_printf(" %x asd", 0))
// 		printf("\nSuccess\n");
// 	int	x1 = printf(" %x asd", 0);
// 	int	x2 = ft_printf(" %x asd", 0);
// 	printf("\nExm : %d", x1);
// 	printf("\nAns : %d", x2);

// 	printf ("\n\n");
// 	if (printf(" %p asd", 0) == ft_printf(" %p asd", 0))
// 		printf("\nSuccess\n");
// 	int	p1 = printf(" %p asd", 0);
// 	int	p2 = ft_printf(" %p asd", 0);
// 	printf("\nExm : %d", p1);
// 	printf("\nAns : %d", p2);
// }