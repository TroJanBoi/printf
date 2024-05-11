/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:07:53 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/04/10 15:08:08 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(char c)
{
	return (write(1, &c, 1));
}

// #include <stdio.h>

// int	main()
// {
// 	char	c = 'S';

// 	if (printf("%c", c) == ft_print_char(c))
// 		printf("\nCorrect");
// 	else
// 		printf("Fail");
// }