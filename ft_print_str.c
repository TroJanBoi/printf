/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:11:03 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/04/10 15:08:02 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
	return (i);
}

// #include <stdio.h>

// int main() {
//     char *str = "Peerapol";
//     char *str1 = NULL;

// 	printf("%d\n", printf("%s", str1));
//     if(printf("%s", str1) == ft_print_str(str1))
// 		printf("\nCorrect\n");
// 	else
// 		printf("\nFail\n");

// 	if(printf("%s", str) == ft_print_str(str))
// 		printf("\nCorrect\n");
// 	else
// 		printf("\nFail\n");
// }