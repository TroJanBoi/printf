/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 12:17:50 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/04/11 12:35:18 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned int	num_base(int n, int base)
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

char	*ft_mallob(int *n, unsigned int *i)
{
	char	*ptr;

	*i = num_base(*n, 10);
	ptr = malloc(sizeof(char) * (*i + 1));
	if (!ptr)
		return (0);
	ptr[*i] = '\0';
	ptr[0] = '0';
	if (*n < 0)
	{
		ptr[0] = '-';
		*n *= -1;
	}
	return (ptr);
}

int	ft_print_num(int n)
{
	unsigned int	i;
	char			*ptr;
	int				temp;

	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	ptr = ft_mallob(&n, &i);
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
