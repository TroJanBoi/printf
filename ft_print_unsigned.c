/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 01:57:22 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/04/10 18:40:26 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned int	num_base(unsigned int n, int base)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n && ++i)
	{
		n = n / base;
	}
	return (i);
}

int	ft_print_unsigned(unsigned int n)
{
	unsigned int	i;
	char			*ptr;
	int				temp;

	i = num_base(n, 10);
	ptr = malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (0);
	ptr[i] = '\0';
	ptr[0] = '0';
	temp = i;
	while (n)
	{
		ptr[--i] = (n % 10) + 48;
		n /= 10;
	}
	write(1, ptr, temp);
	free(ptr);
	return (temp);
}
