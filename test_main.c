/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 09:36:14 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/04/11 14:01:27 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int	main()
{
	char	c = 'Y';
	char	*str = NULL;
	int	decimal = 12;
	int	octal = 012;
	int	hex = 0x12;
	int	max = 2147483647;
	int	min = -2147483648;
	int	nbr = 45;
	unsigned int u_max = 4294967295;
	unsigned int over_max = 4294967210000;
	

	printf("---c character test case---\n");
	if (printf("%c",NULL) == ft_printf("%c",NULL))
		printf("\nSuccess\n");
	int	chr1 = printf("%c",NULL);
	int	chr2 = ft_printf("%c",NULL);
	printf("\nExm : %d", chr1);
	printf("\nAns : %d", chr2);
	printf("\n-------EPISODE 1--------\n");
	if(printf(" %c ", '0') == ft_printf(" %c ", '0'))
		printf("\nSuccess\n");
	int	chr3 = printf(" %c ", '0');
	int	chr4 = ft_printf(" %c ", '0');
	printf("\nExm : %d", chr3);
	printf("\nAns : %d", chr4);
	printf("\n-------EPISODE 2--------\n");
	if(printf(" %c", '0' - 256) == ft_printf(" %c", '0' - 256))
		printf("\nSuccess\n");
	int	chr5 = printf(" %c", '0' - 256);
	int	chr6 = ft_printf(" %c", '0' - 256);
	printf("\nExm : %d", chr5);
	printf("\nAns : %d", chr6);
	printf("\n------------end------------\n");

	printf("\n----s string test case----\n");
	if (printf("%s", str) == ft_printf("%s", str))
		printf("\nSuccess\n");
	int	str1 = printf("%s", str);
	int	str2 = ft_printf("%s", str);
	printf("\nExm : %d", str1);
	printf("\nAns : %d", str2);
	printf("\n-----------end-----------\n");

	printf("\n---d decimal test case---\n");
	if (printf("%d", decimal) == ft_printf("%d", decimal))
		printf("\nSuccess\n");
	int	dec1 = printf("%d", decimal);
	int	dec2 = ft_printf("%d",decimal);
	printf("\nExm : %d", dec1);
	printf("\nAns : %d", dec2);
	printf("\n-------EPISODE 1--------\n");
	if (printf("%d", octal) == ft_printf("%d", octal))
		printf("\nSuccess\n");
	int	dec3 = printf("%d", octal);
	int	dec4 = ft_printf("%d", octal);
	printf("\nExm : %d", dec3);
	printf("\nAns : %d", dec4);
	printf("\n-------EPISODE 2--------\n");
	if (printf("%d", hex) == ft_printf("%d", hex))
		printf("\nSuccess\n");
	int	dec5 = printf("%d", hex);
	int	dec6 = ft_printf("%d", hex);
	printf("\nExm : %d", dec5);
	printf("\nAns : %d", dec6);
	printf("\n-------EPISODE 3--------\n");
	if (printf("%d", INT_MAX) == ft_printf("%d", INT_MAX))
		printf("\nSuccess\n");
	int	dec7 = printf("%d", INT_MAX);
	int	dec8 = ft_printf("%d", INT_MAX);
	printf("\nExm : %d", dec7);
	printf("\nAns : %d", dec8);
	printf("\n-------EPISODE 4--------\n");
	if (printf(" %d ", 0) == ft_printf(" %d ", 0))
		printf("\nSuccess\n");
	int	dec9 = printf(" %d ", 0);
	int	dec10 = ft_printf(" %d ", 0);
	printf("\nExm : %d", dec9);
	printf("\nAns : %d", dec10);
	printf("\n-----------end-----------\n");
	// printf("%i\n", max);
	// printf("%u\n", max);

	// printf("\n---i integer in base 10 test case----\n");
	// printf("%i\n", decimal);
	// printf("%i\n", octal);
	// printf("%i", hex);
	// printf("\n-----------------end-----------------\n");

	printf("\n---x number in hexadecimal (base 16) lowercase format ----\n");
	if (printf("%x", nbr) == ft_printf("%x", nbr))
		printf("\nSuccess\n");
	else
		printf("\nFail\n");
	int	x1 = printf("%x", nbr);
	int	x2 = ft_printf("%x", nbr);
	printf("\nExm : %d", x1);
	printf("\nAns : %d", x2);
	printf("\n-------EPISODE 1--------\n");
	if (printf(" %x ", 0) == ft_printf(" %x ", 0))
		printf("\nSuccess\n");
	else
		printf("\nFail\n");
	int	x3 = printf(" %x ", 0);
	int	x4 = ft_printf(" %x ", 0);
	printf("\nExm : %d", x3);
	printf("\nAns : %d", x4);
	printf("\n-------EPISODE 2--------\n");
	if (printf(" %x ", LONG_MIN) == ft_printf(" %x ", LONG_MIN))
		printf("\nSuccess\n");
	else
		printf("\nFail\n");
	int	x5 = printf(" %x ", LONG_MIN);
	int	x6 = ft_printf(" %x ", LONG_MIN);
	printf("\nExm : %d", x5);
	printf("\nAns : %d", x6);
	printf("\n-----------end-----------\n");

	printf("\n---X number in hexadecimal (base 16) uppercase format ----\n");
	if (printf("%X", nbr) == ft_printf("%X", nbr))
		printf("\nSuccess\n");
	else
		printf("\nFail\n");
	int	x7 = printf("%X", nbr);
	int	x8 = ft_printf("%X", nbr);
	printf("\nExm : %d", x7);
	printf("\nAns : %d", x8);
	printf("\n-----------end-----------\n");

	printf("\n---p pointer test case---\n");
	if (printf("%p", NULL) == ft_printf("%p", NULL))
		printf("\nsuccess\n");
	int	p1 = printf("%p", NULL);
	int	p2 = ft_printf("%p", NULL);
	printf("\nExm : %d", p1);
	printf("\nAns : %d", p2);
	printf("\n-------EPISODE 1--------\n");
	if (printf("%p", 100) == ft_printf("%p", 100))
		printf("\nSuccess\n");
	int	p3 = printf("%p", 100);
	int	p4 = printf("%p", 100);
	printf("\nExm : %d", p3);
	printf("\nAns : %d", p4);
	printf("\n-------EPISODE 2--------\n");
	if(printf(" %p ", 16) == ft_printf(" %p ", 16))
		printf("\nSuccess\n");
	int	p5 = printf(" %p ", 16);
	int	p6 = ft_printf(" %p ", 16);
	printf("\nExm : %d", p5);
	printf("\nAns : %d", p6);
	printf("\n-------EPISODE 3--------\n");
 	if (printf("%p", LONG_MAX) == ft_printf("%p", LONG_MAX))
		printf("\nSuccess\n");
	int	p7 = printf("%p\n", LONG_MAX);
	int	p8 = ft_printf("%p\n", LONG_MAX);
	printf("\nExm : %d", p7);
	printf("\nAns : %d", p8);
	printf("\n-------EPISODE 4--------\n");
 	if (printf("%p", LONG_MIN) == ft_printf("%p", LONG_MIN))
		printf("\nSuccess\n");
	int	p9 = printf("%p\n", LONG_MIN);
	int	p10 = ft_printf("%p\n", LONG_MIN);
	printf("\nExm : %d", p9);
	printf("\nAns : %d", p10);
	printf("\n-----------end-----------\n");

	printf("\n---i Integer test case---\n");
	if(printf("%i", max) == ft_printf("%i", max))
		printf("\nSuccess\n");
	int	i1 = printf("%i", max);
	int i2 = ft_printf("%i", max);
	printf("\nExm : %d", i1);
	printf("\nAns : %d", i2);
	printf("\n-------EPISODE 1--------\n");
	if(printf("%i", min) == ft_printf("%i", min))
		printf("\nSuccess\n");
	int	i3 = printf("%i", min);
	int i4 = ft_printf("%i", min);
	printf("\nExm : %d", i3);
	printf("\nAns : %d", i4);
	printf("\n-----------end-----------\n");

	printf("\n---u unsigned integer test case---\n");
	if (printf("%u", u_max) == ft_printf("%u", u_max))
		printf("\nSuccess\n");
	int u1 = printf("%u", u_max);
	int	u2 = ft_printf("%u", u_max);
	printf("\nExm : %d", u1);
	printf("\nAns : %d", u2);
	printf("\n-------EPISODE 1--------\n");
	if (printf("%u", over_max) == ft_printf("%u", over_max))
		printf("\nSuccess\n");
	int u3 = printf("%u", over_max);
	int	u4 = ft_printf("%u", over_max);
	printf("\nExm : %d", u3);
	printf("\nAns : %d", u4);
	printf("\n-------EPISODE 2--------\n");
	if (printf("%u", LONG_MIN) == ft_printf("%u", LONG_MIN))
		printf("\nSuccess\n");
	int u5 = printf("%u", LONG_MIN);
	int	u6 = ft_printf("%u", LONG_MIN);
	printf("\nExm : %d", u5);
	printf("\nAns : %d", u6);
	if(printf("\n %u %u %u %u %u %u %u\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42) == ft_printf("\n %u %u %u %u %u %u %u\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42))
		printf("\nSuccess\n");
	int u7 = printf("\n %u %u %u %u %u %u %u\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	int	u8 = ft_printf("\n %u %u %u %u %u %u %u\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\nExm : %d", u7);
	printf("\nAns : %d", u8);
	printf("\n-----------end-----------\n");
}